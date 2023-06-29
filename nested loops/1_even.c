#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter the numbers upto you want:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(i%2==0)
	printf("even numbers are:%d\n",i);
	}
	for(j=1;j<=n;j++)
	{
	if(i%2!=0)
	printf("odd numbers are:%d\n",j);
	}
}
