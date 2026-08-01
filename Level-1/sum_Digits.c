#include <stdio.h>
int main(void)
{
	int num,sum=0,rem,rev=0;
	printf("Enter the value :");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("The Sum of digits are : %d",sum);
	return 0;
}