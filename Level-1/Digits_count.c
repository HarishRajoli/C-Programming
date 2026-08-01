#include <stdio.h>
int main()
{
	int num,count;
	printf("Enter the number :");
	scanf("%d",&num);
	if(num==0)
	{
		count=1;
	}
	else 
	{
		while(num!=0)
		{
			num=num/10;
			count=count+1;	
		}
	}
	printf("Number of digits = %d",count);
	return 0;
}