#include <stdio.h>
#include <math.h>

int main() {
    float side, area, perimeter, diagonal;

    // Input side length from the user
    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    // Calculate area, perimeter, and diagonal
    area = side * side;
    perimeter = 4 * side;
    diagonal = sqrt(2) * side;

    // Display the results
    printf("Area of the square: %.2f\n", area);
    printf("Perimeter of the square: %.2f\n", perimeter);
    printf("Diagonal of the square: %.2f\n", diagonal);

    return 0;
}