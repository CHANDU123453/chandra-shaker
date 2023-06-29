#include<stdio.h>
int main()
{
int a[3][3],i,j,sum=0;
printf("enter the matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the trace of matrix is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
if(i==j)
sum=sum+a[i][j];
}
printf("\n");
}
printf("sum of trace is%d\n",sum);
}
