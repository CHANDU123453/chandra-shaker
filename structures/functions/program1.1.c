//how to pass individual members of structures as an argument to functions...

#include<stdio.h>i
struct student
{
char name[10];
int roll;
float percentage;
};
void display(int,float);
int main()
{
struct student s;
printf("enter student name");
scanf("%s",s.name);
printf("enter roll number");
scanf("%d",&s.roll);
printf("enter percentage");
scanf("%f",&s.percentage);
display(s.roll,s.percentage);
}
void display (int a,float b)
{
printf("displaying student information\n");
printf("roll number=%d\n",a);
printf("percentage=%.1f\n",b);
}
