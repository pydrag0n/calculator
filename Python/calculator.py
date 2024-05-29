def calc(num1: float, num2:float, op: str) -> float:
    res: float = 0
    match (op):
        case '-': res = num1 - num2
        case '+': res = num1 + num2
        case '*': res = num1 * num2
        case '/': res = num1 / num2
    return res

num1: float = float(input("Write a: "))
num2: float = float(input("Write b: "))
op: str = input("Write op (+-/*): ")

try:
    answer: float = calc(num1=num1, num2=num2, op=op)
    print(f"Answer {answer}")
except ZeroDivisionError:
    print("ZeroDivisionError")