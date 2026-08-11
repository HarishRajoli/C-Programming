#include <stdio.h>
#include <math.h>
int main(void)
{
	float p,r,t,si,total,a,ci;
	printf("ENTER THE PRINCIPAL AMOUNT :");
	scanf("%f",&p);
	printf("ENTER THE RATE OF INTEREST :");
	scanf("%f",&r);
	printf("ENTER THE TIME :");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("THE SIMPLE INTEREST IS :%0.2f\n",si);
	total=p+si;
	printf("THE TOTAL AMOUNT IS :%0.2f \n",total);
	a =	p*pow((1+r/100),t);
	ci=a-p;
	printf("THE COMPOUND INTEREST IS :%0.2f",ci);
	
	
	return 0;
	
}