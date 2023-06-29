#include<stdio.h>
int main()
{
int i,sum=0,a[5];
printf("enter the array:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("sum of array is:");
for(i=0;i<5;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
}
