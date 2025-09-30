/*
NAME:KABARU ALLAN KAMAU
REG:PA106/G/28220/25
DATE:30-09-2025
DESCRIPTION:EXAM_ELIGIBILITY
*/

#include<stdio.h>
//main function

int main()
{
	 	int marks,attendance;

	printf("Enter the attendance(in percentage)\n,");
	scanf("%d",&attendance);

	printf("Enter the average marks\n,");
	scanf("%d",&marks);
	
	if
		(attendance>=75&&marks>=40)
		{
			printf("Eligible for final exams.\n");
		}
		else{
			printf("Not eligible for the final exam.\n");
		}

	return 0;
}
