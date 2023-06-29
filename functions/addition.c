#include<stdio.h>
int add(int,int);
int main()
{
	int a,b;
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	printf("the sum is:%d\n",add(a,b));
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}


