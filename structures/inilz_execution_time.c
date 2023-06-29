#include<stdio.h>
struct student
{
char first_name[40];
char last_name[40]; 
int id_no;
int age;
};
int main()
{
struct student s;
//taking inputs from user
printf("plese enter the student informatition\n");
printf("enter the first name\n");
scanf("%s",s.first_name);
printf("enter the last name\n");
scanf("%s",s.last_name);
printf("enter the id number");
scanf("%d",&s.id_no);
printf("enter the age");
scanf("%d",&s.age);
//displaying outputs
printf("..............................................\n");
printf("first_name is: %s\n",s.first_name);
printf("last_name is: %s\n",s.last_name);
printf("id number is: %d\n",s.id_no);
printf("age is: %d\n",s.age);
//printf("enter the student details");
//scanf("%s%s%d%d",s.first_name,s.last_name,&s.id_no,&s.age);
//printf("%s\t%s\t%d\t%d\n",s.first_name,s.last_name,s.id_no,s.age);
}
