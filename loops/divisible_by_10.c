#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter n value");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%10==0)
			printf("%d is divisible by 10\n",i);
		else
			printf("%d is not divisible by 10\n",i);
	i=i+1;
	}
}
