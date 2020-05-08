function dateToString() {
  var name =
    "Hey " +
    document.getElementById("myForm").elements[0].value +
    " ,this is your date in words "; //For storing the entered name in the form
  var date1 = document.getElementById("myForm").elements[1].value; //For storing the entered date in the form
  document.getElementById("Form").remove(); //Removing the form to display the output
  date = stringGenaerator(date1); //Passing the date to the stringGenerator()
  document.getElementById("outputName").innerHTML = name; //This will insert the output form of the name to the html in the id named "outputName"
  document.getElementById("output").innerHTML = date; //This will insert the output date to the html in the id name "output"
}
function stringGenaerator(date) {
  var year = date.substring(0, 4); //Taking the year from the input string date
  var month = date.substring(5, 7); //Taking the month from the input string date
  var day = date.substring(8); //Taking the day from the input string date
  var str = dayGenerator(day) + " " + monthGenerator(month); // Adding the string form of day and month to the output string
  if (year > 2000)
    str += " two thousand" + tenGenerator(year.substring(2));
  else if (year == 2000) str += " two thousand";
  else if (year == 1900) str += " ninteen thousand";
  else if (year < 1921)
    str += " ninteen thousand " + tenGenerator(year.substring(2));
  else
    str +=
      " ninteen " +
      yeartenGenerator(year.substring(2, 3)) +
      tenGenerator("0" + year.substring(3));
  return str; //Returning the final string after concatenating the year
}
function dayGenerator(day) {
  var dayData = {
    "01": " First",
    "02": " Second",
    "03": " Third",
    "04": " Fourth",
    "05": " Fifth",
    "06": " Sixth",
    "07": " Seventh",
    "08": " Eighth",
    "09": " Ninth",
    "10": " Tenth",
    "11": " Eleventh",
    "12": " Twelfth",
    "13": " Thirteenth",
    "14": " Fourteenth",
    "15": " Fifteenth",
    "16": " Sixteenth",
    "17": " Seventeenth",
    "18": " Eighteenth",
    "19": " Nineteenth",
    "20": " Twenthy",
    "21": " Twenty first",
    "22": " Twenty second",
    "23": " Twenty third",
    "24": " Twenty fourth",
    "25": " Twenty fifth",
    "26": " Twenty sixth",
    "27": " Twenty seventh",
    "28": " Twenty eighth",
    "29": " Twenty nineth",
    "30": " Thirty",
    "31": " Thirty first",
  };
  return dayData[day];
}
function monthGenerator(month) {
  var monthDatabase = {
    "01": "January",
    "02": "February",
    "03": "March",
    "04": "April",
    "05": "May",
    "06": "June",
    "07": "July",
    "08": "August",
    "09": "September",
    "10": "October",
    "11": "November",
    "12": "December",
  };
  return monthDatabase[month];
}
function tenGenerator(num) {
  var tenDatabase = {
    "01": " one",
    "02": " two",
    "03": " three",
    "04": " four",
    "05": " five",
    "06": " six",
    "07": " seven",
    "08": " eight",
    "09": " nine",
    "10": " ten",
    "11": " eleven",
    "12": " twelve",
    "13": " thirteen",
    "14": " fourteen",
    "15": " fifteen",
    "16": " sixteen",
    "17": " seventeen",
    "18": " eighteen",
    "19": " nineteen",
    "20": "twenty",
  };
  return tenDatabase[num];
}
function yeartenGenerator(num) {
  var yearDatabase = {
    "2": "twenty",
    "3": "thirty",
    "4": "fourty",
    "5": "fifty",
    "6": "sixty",
    "7": "seventy",
    "8": "eighty",
    "9": "ninty",
  };
  return yearDatabase[num];
}
