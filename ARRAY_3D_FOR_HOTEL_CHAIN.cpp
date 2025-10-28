/*
NAME:KABARU ALLAN KAMAU
REG:PA106/G/28220/25
DESCRIPTION:3D array to display hotel chain room occupancy
*/ 

#include<stdio.h>
//3D array

int main(){
	int i,j,k;
	int sum=0;
	//3branches,5floors,10rooms
	//1=occupied,0=vacant
	int chain[3][5][10]={
	{
	{1,0,1,0,1,0,1,0,1,1},
	{1,0,1,1,1,1,1,1,0,1},
	{0,1,1,1,1,0,1,0,0,0},
	{1,0,1,1,0,1,0,1,0,0},
	{1,0,0,1,0,1,0,1,1,1}					
	},
	{
	{1,0,0,1,0,1,0,1,0,0},
	{0,1,0,1,0,1,0,1,0,1},
	{1,0,0,1,0,1,0,1,1,0},
	{0,1,1,1,1,1,1,1,1,1},
	{1,0,1,1,1,1,1,1,0,1}				
	},
	{
	{1,0,0,1,0,1,0,1,1,0},
	{1,1,1,1,1,1,1,1,0,0},
	{1,0,1,1,1,1,1,1,0,1},
	{1,0,1,0,1,0,1,1,0,1},
	{1,0,0,1,0,1,0,1,1,0}					
	}
	};
	
	//print values
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			for(k=0;k<10;k++){
			printf("%d",chain[i][j][k]);
			sum=sum+chain[i][j][k];	
			}
			printf("\n");
		}
		printf("\n");
	} 
	printf("The total occupied rooms are:%d",sum);
	
	return 0;
}