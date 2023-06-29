#include<stdio.h>
int main()
{
	int i=0,n;
	printf("enter n user");
	scanf("%d",&n);
	while(i<n)
	{
		int d,m,y;
		printf("enter d m y");
		scanf("%d%d%d",&d,&m,&y);
		if((y%4==0)&&(y%400==0||y%100!=0))
			printf("%d-%d-%d is leap year",d,m,y);
		else
			printf("%d-%d-%d not leap",d,m,y);
		i++;
	}
}

