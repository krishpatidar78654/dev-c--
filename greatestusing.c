#include <stdio.h>
int main(){
	float a,b,c;
	printf("Enter the numbers\n");
	scanf("%f %f %f", &a,&b,&c);
	if(a>=b && a>=c)
	printf("%f is greatest",a);
	if(b>=a && b>=c)
	printf("%f is grestest",b);
	if(c>=a && c>=b)
	printf("%f is greatest",c);
	return 0;
}
