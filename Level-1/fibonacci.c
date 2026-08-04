#include <stdio.h>
int main(void)
{
	int i,fib=0,a=0,b=1,c;
	printf("Enter the no of sequence reqired for fibonacci :");
	scanf("%d",&fib);
	printf("The Fibonacci series are :");
	printf("%d\t %d\t",a,b);
	for(i=0;i<fib-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
	
	}
	return 0;
}