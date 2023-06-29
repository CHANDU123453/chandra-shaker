#include<stdio.h>
int main()
{
int i,c[5],a[5],b[5];
printf("enter the 'a' array elements");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("enter the 'b' array elements");
for(i=0;i<5;i++)
{
scanf("%d",&b[i]);
}
printf("sum of two arrays:");
for(i=0;i<5;i++)
{
c[i]=a[i]+b[i];
printf("%d\n",c[i]);
}
}

