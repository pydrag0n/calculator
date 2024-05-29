import java.util.Scanner;

class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Write a: ");
        float num1 = scanner.nextFloat();
        System.out.print("Write b: ");
        float num2 = scanner.nextFloat();
        System.out.print("Write op: ");
        char op = scanner.next().charAt(0);
        float answer = calc(num1, num2, op);
        System.out.printf("Answer: %f", answer);
        scanner.close(); 
    }
    public static float calc(float num1, float num2, char op) {
        float res = 0;
        switch (op) {
            case '-': res = num1 - num2; break;
            case '+': res = num1 + num2; break;
            case '*': res = num1 * num2; break;
            case '/': res = num1 / num2; break;
            default: System.out.println("Operation Error");
                break;
        }
        return res;
    }
}