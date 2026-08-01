#include <stdio.h>
int main(void)
{
	int num,rev=0,rem,original;
	printf("Enter the number :");
	scanf("%d",&num);
	original=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}
	printf("The reverse number of %d is:%d",original,rev);
	return 0;
}