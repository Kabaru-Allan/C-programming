/*
NAME:KABARU ALLAN KAMAU
REG NO:PA106/G/28220/25
DESCRIPTION:COMPOUND INTERREST
*/
#include<stdio.h>
int main()
{
	double principle,rate,time,amount;
	int n;
	
	printf("\nenter pinciple:");
	scanf("%1f",&principle);
	
	printf("\nenter the rate(in percentage):");
	scanf("%1f",&rate);
	
	printf("\nenter the time(in years):");
	scanf("%1f",&time);
	
	printf("\nenter the number of time compounded per year:");
	scanf("%d",&n);
	
	amount=principle*pow((1+rate/n),n*time);
	
	printf("\n amount(in Ksh),%.21f",amount);
	
	return 0;
}
