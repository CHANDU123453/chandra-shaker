#include<stdio.h>
int power(int,int);
void main()
{
int base,expo;
printf("enter the base ");
scanf("%d",&base);
printf("enter the exponential");
scanf("%d",&expo);
printf("%d\n",power(base,expo));
}
int power(int base,int expo)
{
int i=1,p=1;
while(i<=expo)
{
p=p*base;
i++;
}
return p;
}
