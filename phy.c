#include <stdio.h>

int main() {
    float u, a, t;

    printf("Enter the initial velocity (u) in m/sec: ");
    scanf("%f", &u);

    printf("Enter the acceleration (a) in m/sec: ");
    scanf("%f", &a);

    printf("Enter the time interval (t) in seconds: ");
    scanf("%f", &t);

    float currentDistance = u * t + 0.5 * a * t * t;

    printf("Distance traveled: %f m\n", currentDistance);

    return 0;
}

