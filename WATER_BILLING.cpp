/*
NAME:KABARU ALLAN KAMAU
REG NO:PA106/G/28220/25
DESCRIPTION:WATER BILLINGS
DATE:30-09-2025
*/

#include<stdio.h>

//main function
int main(){
	int  water_units,unit_fee;
	float total_bill;
	
	//prompt user to enter water_units
	printf("Enter your water_units\n");
	scanf("%d",&water_units);
	
	if(water_units>=0&&water_units<=30){
		unit_fee=20;
	}
	else if(water_units<=31&&water_units>=60){
		unit_fee=25;
	}
	else if(water_units>60){
		unit_fee=30;
	}

total_bill=water_units*unit_fee;
	printf("total_bill is :Ksh%.2f\n",total_bill);
	
	return 0;
		
}