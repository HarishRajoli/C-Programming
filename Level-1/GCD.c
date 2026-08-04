#include <stdio.h>
int main(void)
{
	int a,b,r;
	printf("ENTER THE FIRST VALUE :");
	scanf("%d",&a);
	printf("ENTER THE SECOND VALUE :");
	scanf("%d",&b);
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	printf("GCD = %d",a);
	return 0;
}