#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter a b c values:");
	scanf("%d%d%d",&a,&b,&c);
        d=a>b&&a>c?a:b>c?b:c;
	printf("%d is biggest",d);

}


