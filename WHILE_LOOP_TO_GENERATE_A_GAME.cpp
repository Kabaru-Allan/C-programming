/* 
NAME:KABARU ALLAN KAMAU 
REG:PA106/G/28220/25
DESCRIPTION:WHILE LOOP TO GENERATE A GAME
DATE:07/10/2025
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int secret,guess,attempts=0;
	
	secret=(rand()%20)+12;
	
	printf("Guess the number (between 1and20):\n");
	
	while(1){
			scanf("%d",&guess);attempts++;
		
		if(guess>secret){
			printf("%Too high!\n");}
				else if(guess<secret){
			printf("Too low!\n");
			}else{
						
			printf("Congratulation! You guesssed it right %d attempts.\n",attempts );
					
			break;	
			}
		
	}
		 return 0;
}
	
	