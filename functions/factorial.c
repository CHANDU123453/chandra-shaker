#include<stdio.h>
int fact(int);
void main()
{
int num;
printf("enter the number");
scanf("%d",&num);
printf("%d",fact(num));
}
int fact(int num)
{
int fac=1;
while(num>0)
{
fac=fac*num;
num--;
}
return fac;
}

