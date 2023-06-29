#include<stdio.h>
struct student
{
int roll;
char name[40];
int age;
float height;
};
int main()
{
struct student s={1234,"chandu",23,5.8};
struct student *p;
p=&s;
printf("displaying student details using dot operator");
printf("\n roll number is: %d",s.roll);
printf("\n name is       : %s",s.name);
printf("\n age is        :%d",s.age);
printf("\n height is     :%.1f\n",s.height);

printf("................................\n");

printf("displaying student details using arrow operator");
printf("\n roll number is: %d",p->roll);
printf("\n name is       : %s",p->name);
printf("\n age is        :%d",p->age);
printf("\nheight is     :%.1f\n",p->height);

printf(".................................\n");

printf("displaying student details using pointer with dot operator");
printf("\n roll number is: %d",(*p).roll);
printf("\n name is       : %s",(*p).name);
printf("\n age is        :%d",(*p).age); 
printf("\n height is	 :%.1f\n",(*p).height);
}

