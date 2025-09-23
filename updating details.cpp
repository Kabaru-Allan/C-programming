/*
NAME:KABARU ALLAN KAMAU
REG NO:PA106/G/28220/25
DESCRIPTION:UPDATING DETAILS
*/

#include<stdio.h>
int main()
{
	float height,ID_number,bank_balance;
	char github_com,personal_email;
	
	printf("\nEnter the height(in meters):");
	scanf("%1f",&height);
	
	printf("\nEnter the ID number:");
	scanf("%1f",& ID_number);
	
	printf("\nEnter the bank balance:");
	scanf("%.21f",& bank_balance);
	
	printf("\nEnter your github.com:");
	scanf("%s",github_com);
	
	printf("\nEnter your personal email:");
	scanf("%s",personal_email);
	
	return 0;
}