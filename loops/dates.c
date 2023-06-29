#include<stdio.h>
int main()
{
	int i=0,n;
	printf("enter n user");
	scanf("%d",&n);
	while(i<n)
	{
		int d1,m1,y1,d2,m2,y2;
		printf("enter 2 dates:\n");
		scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
		if(y1>y2)
			printf("%d-%d-%d is old ",d2,m2,y2);
		else if(y1<y2)
			printf("%d-%d-%d is old",d1,m1,y1);
		
		else if(m1>m2)
			printf("%d-%d-%d is old",d2,m2,y2);
		else if(m1<m2)
				printf("%d-%d-%d is old",d1,m1,y1);
		else if(d1>d2)
			printf("%d-%d-%d is old",d2,m2,y2);
		else if(d1<d2)
				printf("%d-%d-%d is old",d1,m1,y1);
		else
			printf("both are same");
		i++;
	}
}


		



