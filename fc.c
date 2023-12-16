#include<stdio.h>
int sum(int a, int b)
{
    printf("enter two numbers: \n");
    scanf("%d %d", &a, &b);
    return a+b;
}
int main()
{int a ,b;
    int add=sum(a,b);
    printf("sum is : %d", add);
    return 0;
}