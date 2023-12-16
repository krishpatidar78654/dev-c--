/*#include<stdio.h>
int gb( int f) {
    int num=10;
   

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

    return gb;
}
int main()
{ 
int num,f; 
 printf("enter number");
scanf("%d", &num);
gb(f);
return 0;
}
*/
#include <stdio.h>

void gb(int num) {
    printf("Prime numbers up to %d are:", num);

    for (int n = 2; n <= num; n++) {
        int c = 0;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                c++;
            }
        }

        if (c == 2) {
            printf("\n%d", n);
        }
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    gb(num);

    return 0;
}
