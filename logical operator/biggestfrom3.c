#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a b and c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is biggest",a);
	}
	else if(b>c)
	{
		printf("%d is biggest",b);
	}
	else
		printf("%d is biggest",c);
}
