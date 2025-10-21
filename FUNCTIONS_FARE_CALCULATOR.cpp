/*
NAME:KABARU ALLAN KAMAU
REG NO:PA106/G/28220/25
DESCRIPTION:CALCULATE FARE USING FUNCTION
*/

#include<stdio.h>

//function prototype
float fare(float distance);

int main()
{
	float distance,result;
	printf("\nEnter the distance in (Km):");
	scanf("%f",&distance);
		
	result=fare(distance);
	printf("The fare is =KES%.2f\n",result);
	
	return 0;
}

//function declaration

float fare(float distance){
	
	float result;
	result=distance*50;
	
	return result;
}