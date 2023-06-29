#include<stdio.h>
int prime(int x)
{
int i=1,count=0;
if(i==x)
return x ;
else
{
for(i=1;i<=x;i++)
if(x%i==0)
count++;
}
return (count==2);
}
int main()
{
int num;
printf("enter the number\n");
scanf("%d",&num);
if(prime(num))
printf("prime");
else
printf("not prime");
}
