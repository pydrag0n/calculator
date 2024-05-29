#include <stdio.h>

float calc(float num1, float num2, char op) {
    float res = 0;
    switch (op)
    {
    case '-': res = num1 - num2;
        break;
    case '+': res = num1 + num2;
        break;
    case '*': res = num1 * num2;
        break;
    case '/': res = num1 / num2;
        break;
    default: printf("%s", "Operation error ");
        break;
    }
    return res;
}


int main(void) {
    float num1;
    float num2;
    char op;
    printf("%s", "Write a: ");
    scanf("%f", &num1);
    printf("%s", "Write b: ");
    scanf("%f", &num2);
    printf("%s", "Write op (+-/*): ");
    scanf(" %c", &op);

    if (op == '/' && num2 == 0) {
        printf("%s", "ZeroDivisionError");
        return 0;
    }

    double answer = calc(num1, num2, op);
    printf("Answer: %f", answer);
    return 0;
}