/*
NAME:KABARU ALLAN KAMAU
REG NO:PA106/G/28220/25
DESCRIPTION:DATA_BUNDLES
*/

#include<stdio.h>
//main function

int main(){
	int choice;
	
	printf("select data bundles:\n");
	printf("1.100MB @50KES\n");
	printf("2.500MB @200KES\n");
	printf("3.1GB @350KES");
	printf("4.2GB @600KES\n");
	printf("Enter your choice (1-4):");
	scanf("%d",&choice);
	
	//switch-case for bundles
	switch(choice){
		case1:
		
		printf("you selected 100MB. cost=50KES\n");
		break;
        case 2:
        	
	    printf("you selected 500MB. cost=200KES\n");
		break;
	    case 3:
	    	
		printf("you selected 1GB. cost=350KES\n");
		break;
	    case 4:
	    	
		printf("you selected 2GB. cost=600KES\n");
		break;
	default:
		
		printf("invalid choice\n");
			
	}
	return 0;
}