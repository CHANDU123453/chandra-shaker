#include<stdio.h>
int main()
{
	int i=1,n=10,a,b;
	printf("enter a multiple");
	scanf("%d",&a);
	while(i<=n)
	{
		b=a*i;
		printf("%d*%d=%d\n",a,i,b);
		i++;
	}
}


