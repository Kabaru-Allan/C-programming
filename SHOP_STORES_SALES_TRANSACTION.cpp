/*
NAME:ALLAN KAMAU KABARU
REG NO:PA106/G/28220/25
DESCRIPTION:FILE RECORD OF SHOPSTORE DAILY SALES TRANSACTION
*/

#include<stdio.h>

int main(){
	FILE*ft;
	float amount,total=0;
	
	ft=fopen("sales.txt","r");
	if(ft==NULL){
		printf("Error in opening the file\n");
		return 1;
	}
	while(fscanf(ft,"%f",&amount)==1){
	total+=amount;	
	}
	printf("Total sales for the day:%.2f\n",total);
	fclose(ft);
	return 0;
}