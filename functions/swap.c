#include<stdio.h>
void swap();
void main()
{
swap();
}
void swap()
{
int a,b;
printf("enter a and b values:");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("swapping after a and b is:%d\n%d\n",a,b);
}
