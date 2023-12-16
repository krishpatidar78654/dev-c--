#include<stdio.h>
int main(){
	int rem,num, c,i,n;
	printf("enter the number till which you want to print the prime numbers\n");
	scanf("%d",&num);
	for(n=1;n<=num;n++)
	{
		c=0;
		for(i=1;i<=n;i++)
		rem=n&i;
		if(rem==0)
		{
			c=c+i;
			return 0;
		}
		if(c==2)
		{
			printf("%d",n);
		}
	}
	return 0;
}