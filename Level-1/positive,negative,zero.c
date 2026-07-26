#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("The given value of a is POSITIVE");
    }
    else if(a<0)
    {
        printf("The given value of a is NEGATIVE");
    }
    else if(a==0)
    {
        printf("The given value of a is ZERO");
    }
    return 0;
}