// swap the values of 2 variables.
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b value:");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value of a is:%d\n",a);
	printf("the value of b is:%d\n",b);
	return 0;
}
