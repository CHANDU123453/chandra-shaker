#include<stdio.h>
int fun1(int n)
{
if(n<=1)
	return 1;
else
	return n*fun2(n-1);
}
int fun2(int n)
{
if(n<=1)
return 1;
else
return n*fun1(n-1);
}
int main()
{
int a,result;
printf("enter a value");
scanf("%d",&a);
result=fun1(a);
printf("result is %d\n",result);
}

