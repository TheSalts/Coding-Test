const fs = require("fs");
let input = fs.readFileSync("/dev/stdin").toString().split(" ");

let count = input;
let arr = [];
for (let i = 1; i <= count; i++) {
  let str = addVoid(count - i);
  let star = "*";
  str += star.repeat(2 * i - 1);
  arr.push(str);
}

for (let i of arr) {
  console.log(i);
}
arr.reverse();
arr.splice(0, 1);
for (let i of arr) {
  console.log(i);
}

function addVoid(i) {
  let string = "";
  for (let j = 0; j < i; j++) {
    string += " ";
  }
  return string;
}
