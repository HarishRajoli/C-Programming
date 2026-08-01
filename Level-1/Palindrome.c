#include <stdio.h>
int main(void)
{
	int num,rem,rev=0,original;
	printf("Enter the number : ");
	scanf("%d",&num);
	original=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(original==rev)
	{
		printf("The given value is Palindrome");
	}
	else
	{
		printf("The given value is not Palindrome");
	}
	return 0;
	
}