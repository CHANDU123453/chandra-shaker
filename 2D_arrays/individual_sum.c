#include<stdio.h>
int main()
{
int i,j,a[3][3],s1,s2;
printf("enter the matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the matrix is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
s1=s2=0;
for(j=0;j<3;j++)
{
s1=s1+a[i][j];
s2=s2+a[j][i];
}
printf("sum of rows:%d\n",s1);
printf("sum of coloums:%d\n",s2);
}
}

