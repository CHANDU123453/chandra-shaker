#include<stdio.h>
int main()
{
int i,a[8],even=0,odd=0;
printf("enter the array");
for(i=0;i<8;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<8;i++)
{
if(a[i]%2==0)
	even++;
else
	odd++;
}
printf("even numbers are:%d",even);
printf("odd numbers are:%d",odd);
}

