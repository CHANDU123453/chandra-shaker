#include<stdio.h>
enum days{sun=1,mon,tues,wed,thu,fri,sat};
int main()
{
enum days d;//The use of enum in C makes the program easy to understand and maintain.
int i;
for(i=sun;i<=sat;i++)
{
printf("%d\n",i);
}
}
