const loginForm = document.querySelector("#login-form");
const loginInput = loginForm.querySelector("input");
const greeting = document.querySelector("#greeting");

const HIDDEN_CLASSNAME = "hidden"; // string만 저장된 변수는 convention으로 다음과 같이 대문자로 표기
const USERNAME_KEY = "username";

const link = document.querySelector("a");

function onLoginSubmit(event) {
  event.preventDefault();
  const nameOfUser = loginInput.value; // value가 Input Block 안에 들어간 내용을 의미함.
  localStorage.setItem(USERNAME_KEY, nameOfUser);

  loginForm.classList.add(HIDDEN_CLASSNAME);
  paintGreeting(nameOfUser);
}

function paintGreeting(username) {
  greeting.innerText = `Hello! ${username}`;
  greeting.classList.remove(HIDDEN_CLASSNAME);
}

const savedUsername = localStorage.getItem(USERNAME_KEY);

if (savedUsername === null) {
  //show the form
  loginForm.classList.remove(HIDDEN_CLASSNAME);
  loginForm.addEventListener("submit", onLoginSubmit);
} else {
  //show the greetings
  paintGreeting(savedUsername);
}
