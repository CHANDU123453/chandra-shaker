#include<stdio.h>
int main()
{
int a[3][3],b[3][3],mul[3][3],i,j,k,;
printf("enter the first matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the second matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("multiplication of matrix is\n");
for(i=0;i<3;i++)
{
//mul[i][j]=0;
for(j=0;j<3;j++)
{
mul[i][j]+=a[i][j]*a[j][i];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
}






