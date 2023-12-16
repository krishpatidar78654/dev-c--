#include<stdio.h>
int main() {
    int num;
    printf("Enter the number till which you want to print the prime numbers: ");
    scanf("%d", &num);

    for (int n = 2; n <= num; n++) {
        int c = 0;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                c++;
            }
        }

        if (c == 2) {
            printf("\n %d ", n);
        }
    }

    return 0;
}
