#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Iterate until the number becomes 0
    while (num > 0) {
        // Extract the last digit
        digit = num % 10;

        // Add the digit to the sum
        sum += digit;

        // Remove the last digit from the number
        num /= 10;
    }

    printf("Sum of individual digits: %d\n", sum);

    return 0;
}
