#include<stdio.h>
int main()
{
	int a,m,n,result,d;
	printf("enter hexadecimal value:");
	scanf("%x",&a);
	m=0x00000001;
	m=m<<3;
	result=m^a;
	d=~result;
	printf("%d\n",d);
	return 0;
}
