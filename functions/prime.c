#include<stdio.h>
int prime(int);
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);
if(prime(num))
{
printf("it is prime");
}
else
{
printf("not a prime");
}
}
int prime(int num)
{
int i, count=0;
for(i=1;i<=num;i++)
{
if(num%i==0)
{
count++;
}
}
return count==2;
}

