#include<stdio.h>
#include<math.h>
double power(int,int);
void main()
{
int a,b;
printf("enter the number");
scanf("%d%d",&a,&b);
printf("%lf",pow(a,b));
}
double power(int a,int b)
{
a=pow(a,b);
return a;
}
