#include<stdio.h>
int main()
{
	int a,b,count=0;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	if(b==0)
	printf("it is not divisible");
	while(a>=b)
	{
	a=a-b;
	count++;
	}
	printf("quotient is:%d\n",count);
	printf("remainder is;%d\n",a);
}


