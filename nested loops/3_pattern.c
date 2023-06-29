#include<stdio.h>
int main()
{
	int i,n=5;
	for(i=1;i<=n;i++)
	{
	int j=1;
	for(j=1;j<=i;j++)
	{
		printf("%d",j);
	}
	printf("\n");
	if(i==j)
	break;
	}
}
