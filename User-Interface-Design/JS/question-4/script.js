function Edit(button) {
  var x = document.getElementById("text");
  if (x.contentEditable == "true") {
    x.contentEditable = "false";
    button.innerHTML = "Edit";
  } else {
    x.contentEditable = "true";
    button.innerHTML = "Save";
  }
}