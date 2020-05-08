function display_info(){
	var first_name=document.querySelector("#first").value;
	var last_name=document.querySelector("#last").value
	document.getElementById("display").innerHTML = "<h2>Hello " + first_name + " " + last_name + "!!</h2>";
}
