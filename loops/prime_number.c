#include<stdio.h>
int main()
{
	int i=1,num,count=0;
	printf("enter the number");
	scanf("%d",&num);
	while(i<=num)
	{
	if(num%i==0)
	count++;
	i++;
	}
	if(count==2)
	{
		printf("%d it is prime",num);
	}
	else
	{
		printf("%d not a prime",num);
	}


}
			
