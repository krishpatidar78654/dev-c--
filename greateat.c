#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("Enter the Numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	printf("%d is greatest",max);
	return 0;
}
