#include<stdio.h>
struct students
{
int roll;
char name[40];
char gender;
float height;
};
int main()
{
int i,n;
struct students s[4];
printf("enter the no of students");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter roll\tenter name\tenter gender\tenter height\n");
scanf("%d%s %c%f",&s[i].roll,s[i].name,&s[i].gender,&s[i].height);
}
printf("enter roll\tenter name\tenter gender\tenter height\n");
for(i=1;i<=n;i++)
{
printf("%d\t	%s\t	%c\t	%.1f\t\n",s[i].roll,s[i].name,s[i].gender,s[i].height);
}
}

