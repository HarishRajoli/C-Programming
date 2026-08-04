#include <stdio.h>
int main(void)
{
	int a,b,multiple,i;
	printf("ENTER THE NUMBER WHICH TABLE U REQUIRED :");
	scanf("%d",&a);
	printf("ENTER THE NUMBER UPTO WHICH U REQUIRED :");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		multiple=a*i;
		printf("%d*%d=%d\n",a,i,multiple);	
	}
	return 0;
}