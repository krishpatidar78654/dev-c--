#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    int result;

    printf("Enter two integer numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    printf("Result= %d\n", result);

    return 0;
}
