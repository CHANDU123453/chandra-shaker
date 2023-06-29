//separeted nested structure
#include<stdio.h>
#include<string.h>
struct child
{
char name[40];
int age;
char gender;
float height;
};
struct parent 
{
int id;
char name[30];
int age;
struct child ch;
};
int main()
{
struct parent info={121,"chandu",23,'M'};
strcpy(info.ch.name,"vikas");
info.ch.age=12;
info.ch.gender='M';
info.ch.height=5.6;
printf("parent information\n");
printf("enter id\tenter name\tenter age\t\n");
printf("%d\t	%s\t	%d\t\n",info.id,info.name,info.age);
printf("child information\n");
printf("enter name\tenter age\tenter gender\tenter height\n");
printf("%s\t	%d\t	%c\t	%.1f\t\n",info.ch.name,info.ch.age,info.ch.gender,info.ch.height);
}



