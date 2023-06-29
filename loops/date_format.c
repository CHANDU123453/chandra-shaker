#include<stdio.h>
int main()
{
	int i=0,n;
	printf("enter the n value");
	scanf("%d",&n);
	while(i<n)
	{
	int d,m,y;
	printf("enter the day month and year");
	scanf("%d-%d-%d",&d,&m,&y);
	switch(m)
	{
		case 1:printf("%d january %d",d,y);
		       break;
		case 2:printf("%d february %d",d,y);
		       break;
		case 3:printf("%d march %d",d,y);
		       break;
		case 4:printf("%d april %d",d,y);
		       break;
		case 5:printf("%d may %d",d,y);
		       break;
		case 6:printf("%d june %d",d,y);
		       break;
		case 7:printf("%d july %d",d,y);
		       break;
		case 8:printf("%d august %d",d,y);
		       break;
		case 9:printf("%d september %d",d,y);
		       break;
		case 10:printf("%d october %d",d,y);
			break;
		case 11:printf("%d november %d",d,y);
			break;
		case 12:printf("%d december %d",d,y);
			break;
		default:printf("invalid number");
			break;
	}
	i++;
	}
}

	

