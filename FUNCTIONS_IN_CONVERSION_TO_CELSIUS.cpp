/*
NAME:KABARU ALLAN KAMAU
REG NO:PA106/G/28220/25
DESCRIPTION:USING FUCTIONS IN CONVERING FAHRENHEIT TO CELSIUS
*/

#include<stdio.h>

//fuction prototype
float celsius(float fahrenheit);
 
 int main()
 
 {
	float result,fahrenheit;
 	printf("Enter the temperature in fahrenheit:");
 	scanf("%f",&fahrenheit);
 	
 	//function call
 	result=celsius(fahrenheit);
 	printf("The conversion to cesius is:%.2f\n",result);
 	
 	return 0;
 }
 
 //function declaration
 
 float celsius(float fahrenheit){
 	 float result;
	 result=(fahrenheit-32)*(5.0/9.0);
	 
	 return result;
 }