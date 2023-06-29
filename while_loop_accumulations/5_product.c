#include<stdio.h>
int main()
{
int i=1,a,b,product=0;
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
while(i<=b)
{
product=product+a;
i++;
}
printf("product of two numbers:%d",product);
}

