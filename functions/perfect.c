#include<stdio.h>
int perfect(int);
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);
if(perfect(num))
printf("it is perfect number");
else
printf("not perfect number");
}
int perfect(int num)
{
int i,temp=num,sum=0;
for(i=1;i<num;i++)
{
if(num%i==0)
sum=sum+i;
}
return (sum==temp);
}

