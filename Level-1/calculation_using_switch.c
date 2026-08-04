#include <stdio.h>
int main(void)
{
	int add,sub,multiple,a,b,choice;
	float div;
	printf("ENTER THE VALUE A :");
	scanf("%d",&a);
	printf("ENTER THE VALUE B :");
	scanf("%d",&b);
	printf("THE CHOICE ARE:\n");
	printf("1-ADDITION \n2-SUBTRACTION \n3-MULTIPICATION \n4-DIVISION\n");
	printf("ENTER THE CHOICE :");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			add=a+b;
			printf("THE ADDITION OF TWO NUMBER IS : %d",add);
			break;
		case 2:
			sub=a-b;
			printf("THE SUBTRACTION OF TWO NUMBER IS : %d",sub);
			break;
		case 3:
			multiple=a*b;
			printf("THE MULTIPLCATION OF TWO NUMBER IS : %d",multiple);
			break;
		case 4:
			if(a>b)
			{
				div=a/b;
				printf("THE DIVISION OF TWO NUMBER IS : %0.2f",div);
				break;
			}
		
		default:
			printf("THE VALUE OF A SHOULD BE GREATER THAN B VALUE");
			break;
			
	}
	return 0;
}