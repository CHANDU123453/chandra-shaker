#include<stdio.h>
int main()
{
int i,a[8],even=0,odd=0;
printf("enter the array");
for(i=0;i<8;i++)
{
scanf("%d",&a[i]);
}
printf("even numbers\n");
for(i=0;i<8;i++)
{
if(a[i]%2==0)
printf("%d\n",a[i]);
}
printf("odd numbers\n");
for(i=0;i<8;i++)
{
if(a[i]%2!=0)
printf("%d\n",a[i]);
}
//printf("even numbers are:%d",even);
//printf("odd numbers are:%d",odd);
}

