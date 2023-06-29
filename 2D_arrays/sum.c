#include<stdio.h>
int main()
{
int sum=0;
int a[2][3]={{1,2,3},{4,5,6}};
for( int i=0;i<2;i++)
{
for(int j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
sum=sum+a[i][j];
}
printf("\n");
}
printf(" sum is %d\n",sum);
}
