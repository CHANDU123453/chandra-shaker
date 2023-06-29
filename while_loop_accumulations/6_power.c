#include<stdio.h>
int main()
{
int p=1,i=1,expo,base;
printf("enter the base:");
scanf("%d",&base);
printf("enter the expo:");
scanf("%d",&expo);
while(i<=expo)
{
p=p*base;
i++;
}
printf("the power of a number is:%d\n",p);
}
