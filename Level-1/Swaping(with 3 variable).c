#include <stdio.h>
int main(void)
{
    int a,b,temp;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("The value of a after swaped is :%d\n",a);
    printf("The value of b after swaped is :%d",b);
    return 0;
}