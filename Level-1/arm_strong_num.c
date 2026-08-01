#include <stdio.h>
int main(void)
{
	int num,rem,original,sum;
	printf("Enter the number :");
	scanf("%d",&num);
	original=num;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(sum==original)
	{
		printf("The given number is ARM STRONG and sum of number is %d",sum);
	}
	else
	{
		printf("The given number is not ARM STRONG and sum of number is %d",sum);
		
	}
	
	return 0;
	
}