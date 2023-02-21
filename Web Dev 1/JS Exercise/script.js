const appendButton = document.querySelector(".append-button");
const shuffleButton = document.querySelector(".shuffle-button");
const initImg = document.querySelector(".init-img");
const paragraph = document.querySelector(".output");
const textArea = document.querySelector(".input");
const replaceButton = document.querySelector(".replace-button");
const text = document.querySelectorAll("p");

replaceButton.addEventListener("click", () => {
  const find = prompt("What do you want to replace");
  const replace = prompt("What do you want to replace it with");

  text.forEach((p) => {
    p.textContent = p.textContent.replaceAll(find, replace);
  })
});

let count = 1;
shuffleButton.addEventListener("click", () => {
  count++;
  if (count > 5) count = 1;
  initImg.setAttribute("src", `./images/invoker${count}.jpg`);
});

appendButton.addEventListener("click", () => {
  const div = document.createElement("span");
  console.log(div);
  div.textContent = " " + textArea.value;
  paragraph.appendChild(div);
  textContent.value = "";
});
