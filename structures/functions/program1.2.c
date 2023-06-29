//how to pass entire structure as an argument to function...

#include<stdio.h>
struct student
{
char name[10];
int roll;
float percentage;
};
void display(struct student s);
int main()
{
struct student s;
printf("enter student name:");
scanf("%s",s.name);
printf("enter roll number:");
scanf("%d",&s.roll);
printf("enter percentage:");
scanf("%f",&s.percentage);
display(s);
}
void display (struct student s)
{
printf(".....displaying student information....\n");
printf("student name=%s\n",s.name);
printf("roll number=%d\n",s.roll);
printf("percentage=%.1f\n",s.percentage);
}
