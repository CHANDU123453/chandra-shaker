#include<stdio.h>
int main()
{
int i,j,a[2][3],s1=0,s2=0;
printf("enter the matrix");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the individual sum of rows and columns is:\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
s1=s1+a[i][j];
s2=s2+a[j][i];
}
}
printf("sum of individual rows is:%d%d\n",s1,s2);
//printf("sum of individual column is:%d\n",s2);
}

