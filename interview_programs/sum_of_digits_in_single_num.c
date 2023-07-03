#include<stdio.h>
int main()
{
int num,rem;
printf("enter the num");
scanf("%d",&num);
rem=num%9;
if(rem==0)
{
printf("sum is %d",9);
}
else
printf("sum is %d",rem);
}
