/*
Name:Kabaru Allan
Reg No:PA106/G/28220/25
Description:FORMULAE FOR EVALUATION IN A CYLINDER
*/

#include<stdio.h>
int main ()
{
	double radius,height,pi,volume,surfacearea;
	
	printf("\nEnter the radius of the cylinder:");
	scanf("%1f",&radius);
	
	printf("\nEnter the heigt of the cylinder:");
	scanf("%1f",&height);
	
	volume=pi*radius*radius*height;
	surfacearea=(2*pi*radius*radius)+(2*pi*radius*height);
	
	printf("volume of the cyilinder:%.21f\n",volume);
	printf("surfacearea of the cylinder:%.21f\n",surfacearea);
	
	return 0;
}