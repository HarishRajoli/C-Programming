#include <stdio.h>
int main(void)
{
	int num,i,prime,j,start;
	printf("ENTER THE START NUMBER :");
	scanf("%d",&start);
	printf("ENTER THE END NUMBER :");
	scanf("%d",&num);
	for(i=start;i<=num;i++)
	{
		prime=1;
		if(num<=1)
		{
			printf("NO SEQUENCE FOUND");
		}
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				{
					prime=0;
			 		break;
				}
			
		}
	
	if(prime==1)
	{
		printf("%d\t",i);
	}
	
	}
	return 0;
}