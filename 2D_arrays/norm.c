#include<stdio.h>
int main()
{
int i,j,a[2][2],sum=0;
printf("enter the array elemnts");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	sum=sum+a[i][j]*a[i][j];
	}
}
printf(" norm of matrix is %d",sum);//norm is square of sum of matrix
}


