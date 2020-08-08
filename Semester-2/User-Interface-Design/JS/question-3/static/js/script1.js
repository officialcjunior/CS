var i = 1;
function ageList() {
  var birthyear = document.getElementById("Form").elements[1].value;
  var name = document.getElementById("Form").elements[0].value;
  console.log(birthyear);
  console.log(name);
  var div = document.createElement("div");
  var h1 = document.createElement("h1");
  var textAnswer = document.createTextNode(
    i + ".   " + name + "   " + birthyear
  );
  div.setAttribute("id", "ageInDays" + i);
  h1.appendChild(textAnswer);
  div.appendChild(h1);
  document.getElementById("flex-box-result").appendChild(div);
  document.getElementById("ageInDays" + i).innerHTML +=
    "  " +
    '<button class="btn btn-primary" onclick="edit(this)">Edit</button>' +
    "  " +
    '<button class="btn btn-danger" onclick="reset(this)">Delete</button>';
  i++;
  document.getElementById("Form").reset();
}
function reset(element) {
  var id = element.parentNode;
  console.log(id.id);
  document.getElementById(id.id).remove();
}
