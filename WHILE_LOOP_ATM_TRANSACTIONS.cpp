/* 
NAME:KABARU ALLAN KAMAU
REG:PA106/G/28220/25
DESCRIPTION:WHILE LOOP TO DISPLAY BANK BALANCE AFTER ATM IS USED
DATE:06/10/2025
*/

#include<stdio.h>

int main(){
	int amount;
	int balance =2200;//start
 
    printf("your current balance is %d\n",balance);
     
    while(balance>0)//stop
	{
		printf("Enter the amount to withdraw\n");
		scanf("%d",&amount);
		balance-= amount;//step,balance=balance-amuont
		printf("New Balance:=|%d \n",balance);
	}
	    printf("Insufficient balance");
	    
    return 0;
}