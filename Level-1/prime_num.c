#include <stdio.h>
int main(void)
{
	int n,i,prime=1;
	printf("Enter the number :");
	scanf("%d",&n);
	if(n<=1)
	{
		prime=0;
	}
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0) 
			{
				prime=0;
				break;
			}
		}
	}
	if(prime)
	{
		printf("%d is the prime number\n ",n);
		
	}
	else 
	{
		printf("%d is not prime number ",n);
	}
	return 0;
}