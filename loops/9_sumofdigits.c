#include<stdio.h>
int main()
{
	int i=1,a,n,sum3,sum1=0,sum2=0;
	printf("enter numbers:");
	scanf("%d",&n);
	while(i<=n)
	{
	printf("enter value of a");
	scanf("%d",&a);
	if(a>0)
	{
	sum1=sum1+a;
	}
	else
	{
	sum2=sum2+a;
	}
	i++;
	sum3=sum1+sum2;

}
printf("sum of all numbers:%d",sum3);
printf("positive numver:%d",sum1);
printf("negative number:%d",sum2);
}
