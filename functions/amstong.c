#include<stdio.h>
int arm(int);
void main()
{
int num;
printf("enter the number");
scanf("%d",&num);
if(arm(num))
{
printf("it is amstrong");
}
else
{
printf("not amstrong");
}
}
int arm(int num)
{
int sum=0,rem,temp=num;
while(num>0)
{
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
}
return (sum==temp);
}


