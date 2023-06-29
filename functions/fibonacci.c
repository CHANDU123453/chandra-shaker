#include<stdio.h>
void fib(int);
void main()
{
int n;
printf("enter the numbers you want");
scanf("%d",&n);
fib(n);
}
void fib(int n)
{
int i,n1=0,n2=1,n3;
printf("%d\n%d\n",n1,n2);
for(i=2;i<=n;i++)
{
n3=n1+n2;
printf("%d\n",n3);
n1=n2;
n2=n3;
}
}

	
