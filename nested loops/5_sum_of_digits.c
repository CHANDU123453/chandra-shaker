#include<stdio.h>
int main()
{
int i=1,n,rem;
printf("enter the numbers you want:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
int num,sum=0,count=0;
printf("enter the numbers:\n");
scanf("%d",&num);
rem=num%10;
count++;
num=num/10;
printf("sum of digits:%d\n",count);
}
}


