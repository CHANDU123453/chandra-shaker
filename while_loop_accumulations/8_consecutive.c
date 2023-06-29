#include<stdio.h>
int main()
{
int i=1,n,sum=0;
printf("enter the n value:");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("sum of consecutive numbers:%d",sum);
}
