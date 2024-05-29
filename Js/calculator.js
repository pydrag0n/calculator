
function calc(num1, num2, op) {
    switch(op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/':
            if (num2 !== 0) {
                return num1 / num2;
            } else {
                return "ZeroDivisionError";
            }
        default:
            return "Operation Error";
    }
}
let num1 = parseFloat(prompt("Write a:"));
let num2 = parseFloat(prompt("Write b:"));
let op = prompt("Write op: (+-*/):");

let answer = calc(num1, num2, op);
alert(`Answer: ${answer}`);
