// prompt function은 사용자가 쓸 수 있는 창을 띄워준다.
// 2개의 argument를 받으며, 첫 번재는 message(string), 내가 띄우고자 하는 말
// 두 번째는 default(string)로서 입력 칸에 미리 Typed 된 내용을 적는 것이다.
// prompt의 값이 실행되지 않으면 이 외의 javascript는 실행되지 않는다. 매우 오래된 방식.

const age = parseInt(prompt("How old are you?", "Type it"));

console.log(typeof age, typeof parseInt(age));
// variable의 type을 알기 위해서는 typeof를 사용하면 됨.
//parseInt는 이미 만들어져있는 function으로서 string -> number 로 만드는 function이다.

//isNaN() : argument가 NaN(Not a Number)인지 아닌지를 boolean 값으로 return함.
// - true: Not a Number / false: Number

console.log(isNaN(age));

if (isNaN(age) || age < 0) {
  console.log("Please write a real positive number");
} else if (age < 18) {
  console.log("You are too young.");
} else if (age >= 18 && age <= 50) {
  console.log("You can drink");
} else if (age > 50 && age <= 80) {
  console.log("You better do stuff that makes you healthier");
} else if (age > 80) {
  console.log(
    "You can do whatever you want, already you're far from living long "
  );
} else if (age === 100) {
  console.log("Wow, you've lived until 100! Congratulation!");
}
