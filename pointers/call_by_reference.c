#include<stdio.h>
void swap(int*,int*);
int main()
{
int a,b;
printf("enter a and b values:");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("after swapping a is:%d\n",a);
printf("after swapping b is:%d\n",b);
}
void swap(int*x,int*y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}
