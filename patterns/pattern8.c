
#include<stdio.h>
int main()
{
int i=1,row=5;
while(i<=row)
{
	int j=1;
	while(j<=i)
	{
	printf("%d",(i+j+1)%2);
	j++;
	}
	printf("\n");
i++;
}
}
