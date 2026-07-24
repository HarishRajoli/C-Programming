#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value a:");
    scanf("%d",&a);
    printf("Enter the value b:");
    scanf("%d",&b);
    switch(a>b){
        case 1:
        printf("the value of a is greater");
        break;
        case 0:
        printf("The value of b is greater");
        break;
    }
    return 0;
}