#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The given number is even");
    }
    else
    {
        printf("The given number is odd");
    }
    return 0;
}