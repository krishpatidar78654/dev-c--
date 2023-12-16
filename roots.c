#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2; 

    printf("Enter the coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - (4 * a * c);

    if (discriminant < 0) {
        printf("No real roots\n");
    } else {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are %.2lf and %.2lf\n", root1, root2);
    }

    return 0;
}

