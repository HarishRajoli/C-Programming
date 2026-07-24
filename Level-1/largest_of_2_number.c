#include <stdio.h>
int main(void)
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("The value of a is greater than b");
    }
    else if(a<b)
    {
        printf("The value of b is greater than a");
    }
    else if(a==b)
    {
        printf("The value of a and b are Equal");
    }
    return 0;
}