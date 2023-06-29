#include<stdio.h>
int main()
{
	int num,a;
	printf("enter the number");
	scanf("%d",&num);
	(num<0)?printf("result is:%d",a=-1*num):num>0?printf("result is %d",num):printf("others");
	return 0;
}
