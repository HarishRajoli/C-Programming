#include <stdio.h>
int main(void)
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);//20
    printf("Enter the value of b:");
    scanf("%d",&b);//30
    a=a+b;//20+30
    b=a-b;//50-30
    a=a-b;//50-20
    printf("The value of a after swaped is:%d\n",a);
    printf("The value of b after swaped is :%d",b);

    return 0;

}