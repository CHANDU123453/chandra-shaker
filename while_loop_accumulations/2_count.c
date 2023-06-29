#include<stdio.h>
int main()
{
	int i=0,n;//enter n numbers
	int a,result;
	printf("enter n number");
	scanf("%d",&n);
	while(i<n)
	{
		printf("enter a number");
		scanf("%d",&a);
		if(i==0)
			result=a;
		else
			result=result>a;
		printf("%d",result);
	i++;
	}
}

