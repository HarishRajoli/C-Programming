#include <stdio.h>
int main()
{
    int sum=0,num,i;
    printf("Enter the sum of n natural number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("The sum of %d natural number is : %d",num,sum);
    return 0;
}