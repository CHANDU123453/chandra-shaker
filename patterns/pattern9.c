
#include<stdio.h>
int main()
{
int i=1,row=5;
while(i<=row)
{
	int j=1,num=5;
	while(j<=i)
	{
	printf("%d",num-i+1);
	j++;
	}
	printf("\n");
i++;
}
}
