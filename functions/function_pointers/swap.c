#include<stdio.h>
void swap(int,int);
int main()
{
int a,b;
int (*ptr)(int,int)=&swap;
printf("enter a and b values");
scanf("%d%d",&a,&b);
(*ptr)(a,b);
}
void swap(int x,int y)
{
x=x+y;
y=x-y;
x=x-y;
printf("after swapping x is %d\n",x);
printf("after swapping y is %d\n",y);
}


