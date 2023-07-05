//Addition program interms of pointer version 

#include<stdio.h>
int add(int*,int*);
int main()
{
int a,b;
printf("enter a and b values");
scanf("%d%d",&a,&b);
printf("%d\n",add(&a,&b));
}
int add(int *x,int *y)
{
int sum;
sum=*x+*y;
return sum;
}


