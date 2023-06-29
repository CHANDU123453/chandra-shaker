#include<stdio.h>
int main()
{
	int num;
	float bill;
	printf("enter the number");
	scanf("%d",&num);
	if(num>=0&&num<=200)
	{
		printf("result is:%f",bill=100);
	}
	else if(num>=201&&num<=400)
	{
		printf("result is:%f",bill=100+(num-200)*0.65);

	}
	else if(num>=401&&num<=600)
	{
		printf("result is %f",bill=230+(num-400)*0.80);
	}
	else if(num>=601)
	{
		printf("result is %f",bill=390+(num-600)*1.00);
	}
}

