
#include<stdio.h>
int main()
{
int i=1,row=5,num=1;
while(i<=row)
{
	int j=1;
	while(j<=i)
	{
	printf("%d ",num);
	num++;
	j++;
	}
	printf("\n");
i++;
}
}
