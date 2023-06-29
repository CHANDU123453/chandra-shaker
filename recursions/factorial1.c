#include<stdio.h>
int fact(int a)
{
if(a<=1)
return 1;
else
return a*fact(a-1);
}
int main()
{
int n,result;
printf("enter the factorial number");
scanf("%d",&n);
result=fact(n);
printf("factorial is %d\n",result);
}
