/*
NAME:KABARU ALLAN KAMAU
REG:PA106/G/28220/25
DESCRIPTION:REVENUE TRACKER USING 1D 
*/ 

#include<stdio.h>
//iD array

int main(){
//declare and initialize 1D array
float revenue[7];
float sum,average;

//prompt user to enter daily revenue
printf("\nEnter day 1's revenue:"); 
scanf("%f",&revenue[0]);

printf("\nEnter day 2's revenue:"); 
scanf("%f",&revenue[1]);

printf("\nEnter day 3's revenue:");
scanf("%f",&revenue[2]);

printf("\nEnter day 4's revenue:");
scanf("%f",&revenue[3]);

printf("\nEnter day 5's revenue:");
scanf("%f",&revenue[4]);

printf("\nEnter day 6's revenue:");
scanf("%f",&revenue[5]);

printf("\nEnter day 7's revenue:");
scanf("%f",&revenue[6]);

sum=revenue[0]+revenue[1]+revenue[2]+
    revenue[3]+revenue[4]+revenue[5]+revenue[6];

	average=sum/7;
printf("\nThe total weekly revenue is:KES%.2f",sum);
printf("\nAverage daily revenue:KES%2.f",average);

return 0;
}