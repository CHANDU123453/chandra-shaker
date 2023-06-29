#include<stdio.h>
int main()
{
	int i=1,a,n,sum=0;
	printf("enter numbers:");
	scanf("%d",&n);
	while(i<=n)
	{
	printf("enter value of a:");
	scanf("%d",&a);
	if(a>0)
	{
	sum=sum+a;
	}
	i++;
}
printf("sum of number:%d",sum);
}
