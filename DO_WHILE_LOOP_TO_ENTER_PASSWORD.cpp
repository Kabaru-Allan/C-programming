/*
NAME:KABARU ALLAN KAMAU
REG:PA106/G/28220/25
DESCRIPTION:DO WHILE LOOP TO SHOW PASSWORD INPUT UNTIL ACCESS GRANTED
DATE:06/10/2025
*/

#include<stdio.h>

 int main(){
	 int password =1234;//start
	 do{
	 	 printf("Enter the Password to log in:");
	 scanf("%d",&password);
	 }while(password !=1234);
	 
	 printf("Access Granted\n");
	 
	 return 0;
 }