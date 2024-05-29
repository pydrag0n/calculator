package main

import (
    "fmt"
)

func main() {
    var num1, num2 float64
    var operator string

    fmt.Print("Write a: ")
    fmt.Scanln(&num1)

    fmt.Print("Write b: ")
    fmt.Scanln(&num2)

	fmt.Print("Write operation (-+*/): ")
    fmt.Scanln(&operator)

    answer := calc(num1, num2, operator)
    fmt.Printf("Answer: %v", answer)
}

func calc(num1, num2 float64, operator string) float64 {
    switch operator {
    case "+":
        return num1 + num2
    case "-":
        return num1 - num2
    case "*":
        return num1 * num2
    case "/":
        if num2 != 0 {
            return num1 / num2
        } else {
            fmt.Println("ZeroDivisionError")
            return 0
        }
    default:
        fmt.Println("Operation Error")
        return 0
    }
}