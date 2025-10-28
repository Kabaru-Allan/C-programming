/*
NAME:KABARU ALLAN KAMAU
REG:PA106/G/28220/25
DESCRIPTION:2D array to display room occupancy
*/ 

#include<stdio.h>
//2D array

int main(){
int occupancy[5][10];
int floor,room;
int occupied,vacant;	
	
//input occupancy data(1=occupied,0=vacant)
	printf("Enter room occupany data(1=occupied,0=vacant):\n");
	for(floor=0;floor<=4;floor++){
		printf("\nfloor %d",floor+1);
		for(room=0;room<=9;room++){
			printf("\nroom %d",room+1);
			scanf("%d",&occupancy[floor][room]);
		}
	}
//display occupancy per floor
    printf("\nOccupancy per floor");
    for(floor=0;floor<=4;floor++){
		occupied=1;
		vacant=0;
		for(room=0;room<=9;room++){
			if(occupancy[floor][room]==1)occupied++;
			else vacant++;
				
		}
      printf("floor%d occupied:%d|vacant:%d\n",floor+1,
	  occupied,vacant);
	}
	return 0;
}