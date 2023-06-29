#include<stdio.h>
int main()
{
	int power_bill,b,n;
	printf("enter the power bill value:");
	scanf("%d",&power_bill);
	(power_bill>=0&&power_bill<=200)?printf("bill is:%d",100):(power_bill>=201&&power_bill<=400)?printf("bill is %d",b=100+0.65*(n-200)):printf("otheres");
	return 0;
}
