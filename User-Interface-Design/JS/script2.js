function dateAndTime() {
  var today = new Date();
  //today.getFullYear provides the 4 digit year,today.getMonth provides the number of the month from 0 to 11,today.getDate provides today's date.
  //The +1 in month is to increase the value as it returns a value between 0 and 11
  var date = "Date: ";
  if (today.getDate() < 10) date += "0" + today.getDate();
  else date += today.getDate();
  if (today.getMonth() + 1 < 10) date += "/0" + today.getMonth();
  else date += "/" + today.getMonth();
  date += "/" + today.getFullYear();
  var time = "Time: ";
  if (today.getHours() < 10) time += "0" + today.getHours();
  else time += today.getHours();
  if (today.getMinutes() < 10) time += ":0" + today.getMinutes();
  else time += ":" + today.getMinutes();
  if (today.getSeconds() < 10) time += ":0" + today.getSeconds();
  else time += ":" + today.getSeconds();
  document.getElementById("date").innerHTML = date;
  document.getElementById("time").innerHTML = time; //This helps to insert the date and time in the id location 'datetime' in the html page
}
dateAndTime();
