/*
NAME:ALLAN KAMAU KABARU
REG NO:PA106/G/28220/25
DESCRIPTION:FILE RECORD OF TRACKS OF BORROWED BOOKS
*/

#include<stdio.h>
 
int main(){
	FILE*ft;
	char title[100];
	
	ft=fopen("borrowed_books.txt","a");
	if(ft==NULL){
		printf("Error opening file\n");
		return 1;
	}
	printf("Enter book title:");
	fgets(title,sizeof(title),stdin);
	
	fprintf(ft,"%s",title);
	printf("Book title successfully stored.\n");
	
	fclose(ft);
	return 0;
}