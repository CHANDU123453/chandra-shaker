#include<stdio.h>
int count(int);
void main()
{
int num;
printf("enter the number");
scanf("%d",&num);
printf("%d\n",count(num));
}
int  count(int num)
{
int c=0,rem;
while(num>0)
{
rem=num%10;
c++;
num=num/10;
}
return c;
}
