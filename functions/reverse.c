#include<stdio.h>
int rev(int);
void main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	printf("%d",rev(num));
}
int rev(int num)
{
	int sum=0,rem;
	while(num>0)
	{
	rem=num%10;
	sum=sum*10+rem;
	num=num/10;
	}
	return sum;
}

	
