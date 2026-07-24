#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    if(a>b&&b>c)
    {
        printf("The value of a is greater");

    }
    else if(a<b&&b>c)
    {
        printf("The value of b is greater ");
    }
    else if(c>a&&c>b)
    {
        printf("The value of c is greater");
    }
    else if(a==b&&b==c)
    {
        printf("The value a,b,c is equal");
    }
    
    return 0;

}