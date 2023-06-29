#include<stdio.h>
int main()
{
int i=1,n=5;
while(i<n)
{
	int j=5;
	while(j>=i)
	{
		printf("* ");
		j++;
	}
printf("\n");
i++;
}
}
