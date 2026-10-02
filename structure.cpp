#include<stdio.h>
#include<string.h>

struct student{
	char email[50],regNo[50];
	char name[50];
	int id;
};
int main(){
struct student student1;

strcpy(student1.name,"Paul Mayu");
strcpy(student1.regNo,"HB106/T/27378");
strcpy(student1.email,"mayupaul");
student1.id=402176;

printf("student 1 name:%s\n",student1.name);
printf("student 1 regNo:%s\n",student1.regNo);
printf("student 1 email:%s\n",student1.email);
printf("student 1 id:%d\n",student1.id);

return 0;	
}
