/*
NAME:ALLAN KAMAU KABARU
REG NO:PA106/G/28220/25
DESCRIPTION:FILE RECORD OF STUDENTS EXAMINATION RESULTS IN A BINARY FILE
*/

#include<stdio.h>
#include<stdlib.h>
 
struct student{
	char name[50];
	char reg_no;
	float marks;
};
int main(){
	FILE*ft;
	struct student s;
	
	//read in binary
	ft=fopen("results.dat","rb");
	if(ft==NULL){
		printf("Error opening the file.\n");
		return 1;
	}
	printf("Student results:\n");
	printf("----------\n");
	
	while(fread(&s,sizeof(struct student),1,ft)){
		printf("Name:%s\n",s.name);
		printf("Reg No:%s\n",s.reg_no);
		printf("Marks:%.2f\n",s.marks);
		printf("-----------\n");
	}
	fclose(ft);
	return 0;
}
 