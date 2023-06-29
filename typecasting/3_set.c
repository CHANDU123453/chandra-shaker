#include<stdio.h>
int main()
{
        int a,n,m,result,p;
	printf("enter the hexadecimal value and position:");
	scanf("%x%d",&a,&p);
	m=0x00000001;
	n=m<<p;
	result=a|n;
	printf("result is%d",result);
	return 0;
}
