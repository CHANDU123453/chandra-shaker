#include<stdio.h>
#include<string.h>
struct obj//structure definition...no memory is allocated it is like a template
{
int roll;
char name[40];
int age;
}
struct obj//structure definition&declaration is done at the sametime...memory is allocated
{
int roll;
char name[40];
int age;
}first;

int main()
{
struct obj s={121,"chandu",12};
first.roll=100;
strcpy(first.name,"sunny");
first.age=98;
printf("%d\t%s\t%d\n",first.roll,first.name,first.age);
printf("%d\t%s\t%d\n",s.roll,s.name,s.age);
}


