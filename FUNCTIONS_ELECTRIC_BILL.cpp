/*
NAME:KABARU ALLAN KAMAU
REG NO;PA106/G/28220/25
DESCRIPTION:USING FUCTION TO CALCULATE ELECTRIC BILLS
*/

#include<stdio.h>

//function prototype
float total_bill(int electrical_units);

int main()
{
	int electrical_units;
	float result;
	
	printf("\nEnter the electrical units used:");
	scanf("%d",&electrical_units);
	
	//function call
	result=total_bill( electrical_units);
	printf("The total bill is:KES%.2f\n",result);
	
	return 0;
}

//function declaration
float total_bill(int electrical_units){
	float result;
	
	if(electrical_units>=0&&electrical_units<=100){
		result=electrical_units*10;
	}
	else if(electrical_units>100&&electrical_units<=200){
		result=(100*10)+((electrical_units-100)*15);
	}
	if(electrical_units>200){
		result=((100*10)+(100*15)+((electrical_units-200)*20));
	}
	
	return result;
}
