#include <stdio.h>
int main ()
{
    int year,leap_year;
    printf("Enter the year:");
    scanf("%d",&year);
    leap_year=year%4;
    if(leap_year==0)
    {
        printf("The given year is LEAP YEAR");
    }
    else
    {
        printf("The given year is NOT LEAP YEAR");
    }
    return 0;

}