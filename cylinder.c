#include <stdio.h>

int main() {  
    float PI = 3.14;
    float radius, height;
    float area, volume;

    printf("Enter the radius of the cylinder in cm: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder in cm: ");
    scanf("%f", &height);

    area = PI * (radius*radius) * height + 2 * PI * (radius*radius);
    volume = PI *(radius*radius) * height;

    printf("The area of the cylinder is: %f\n", area);
    printf("The volume of the cylinder is: %f\n", volume);
    
    return 0;
}
