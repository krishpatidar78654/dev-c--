#include <stdio.h>

int main() {
    int n, i;
    int firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Enter the number of terms you want in the Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci sequence: ");

    // Print the first two terms
    printf("%d %d ", firstTerm, secondTerm);

    // Generate the next terms
    for (i = 3; i <= n; i++) {
        nextTerm = firstTerm + secondTerm;
        printf("%d ", nextTerm);
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    printf("\n");

    return 0;
}