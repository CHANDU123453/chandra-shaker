#include<stdio.h>
int main()
{
	int m,m1,n,p,a,result;
	printf("enter hexadecimal value and position:");
	scanf("%x%d",&a,&p);
	m=0x00000001;
	m1=~m;
	n=m1<<p;
	result=n&a;
	printf("%d",result);
}
