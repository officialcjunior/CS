/*
This function gets the Celesius passed as function paremeter, converts it Celesius
and returns into id="output"
*/

function temperatureConverter(Celesius) {
  Celesius = parseFloat(Celesius);
  document.getElementById("output").innerHTML=((Celesius/5)*9+32);
}