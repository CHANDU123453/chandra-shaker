//def:func ptr is normal pointer and they have the capability to point to a function
#include<stdio.h>
int add(int,int);
int main()
{
int a,b,result;
int (*ptr)(int,int)=&add;
printf("enter a and b value");
scanf("%d%d",&a,&b);
result=(*ptr)(a,b);
printf("sum of two numbers is %d",result);
}
int add(int x,int y)
{
return x+y;
}

