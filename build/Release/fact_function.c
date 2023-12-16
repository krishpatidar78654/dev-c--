#include<stdio.h>
int main()
{
    int n,fact;
    printf("Enter number: \n");
    scanf("%d",&n);
    fact=factorial(n);
    printf("%d",fact);
    return 0;
}
factorial(int num)
{
    int i,prod;
    for(i=1;i<=num;i++);
    {
        prod=prod*i;
        return(prod);
    }
}