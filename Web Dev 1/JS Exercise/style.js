const inputButton = document.getElementById("append-button");

inputButton.addEventListener("click", function() {
  let text = document.getElementById("input").value;
  let outputDiv = document.getElementById("output");
  let textNode = document.createTextNode(text);
  outputDiv.appendChild(textNode);
});
