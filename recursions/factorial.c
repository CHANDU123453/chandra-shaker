#include<stdio.h>
int fact(int a)
{
int f=1;
if(a==1)
return a;
f=a*fact(a-1);
return f;
}
int main()
{
int n,result;
printf("enter the factorial number");
scanf("%d",&n);
result=fact(n);
printf("factorial is %d\n",result);
}
