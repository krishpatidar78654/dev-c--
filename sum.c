#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    double x, sum = 1.0;
    int terms;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for (int i = 1; i <= terms; i++) {
        int power = 2 * i;
        double term = pow(x, power) / factorial(power);

        if (i % 2 == 0) {
            sum -= term;
        } else {
            sum += term;
        }
    }

    printf("Sum = %.4lf\n", sum);

    return 0;
}
