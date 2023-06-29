//Program to find the square root using user defined function
#include<stdio.h>
#include<math.h>
double square(int);
double square(int num)
{
int a;
a=sqrt(num);
return a;
}
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);
printf("%lf",square(num));
}


