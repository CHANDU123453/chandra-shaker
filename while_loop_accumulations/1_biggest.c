#include<stdio.h>
int main()
{
	int i=1,n;
	int big;
	printf("enter n value:");
	scanf("%d",&n);
	while(i<=n)
	{
		int a,b,c,d;
	//printf("enter a value");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(i==0)
	big=a;
	else
	{/*
		//printf("big=%d\n",big);
		big=big>b?big:b;
		//printf("big1=%d\n",big);
		big=big>c?big:c;
		//printf("big2=%d\n",big);
		big=big>d?big:d;
		//printf("big3%d",big);
	*/

		if(big>b)
		{
			if(big>c)
			{
				if(big>d)
				{
	printf("%d is biggest:",big);
				}
			}
		}
	}
	i++;
	}

}
	
