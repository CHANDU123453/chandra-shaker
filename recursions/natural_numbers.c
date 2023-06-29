#include<stdio.h>
int sum(int x)
{
int s=0;
if(x==1)
return x;
s=x+sum(x-1);
return s;
}
int main()
{
int n,result;
printf("enter the n natural number");
scanf("%d",&n);
result=sum(n);
printf("sum of natural number is %d\n",result);
}
