/*
NAME:KABARU ALLAN KAMAU
REG NO:PA106/G/28220/25
DESCRIPTION:LOAN QUALIFICATION
*/

#include<stdio.h>
int main()
{
	int age;
	float annual_income;
 
    printf("\nEnter your age(in years):");
    scanf("%d",&age);
    
    printf("\nEnter your annual income(in shillings):");
    scanf("%1f",&annual_income);
    
    if
	(annual_income>=21000&&age>=22)
	{
		printf("congratulation you qualify for a loan.\n");
	}
	else{
		  printf("unfortunately, we are unable to offer you a loan at this time.\n");
	}
	return 0;
}