#include<stdio.h>
int main()
{
int i,a[10];
printf("enter the array:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("the array elements are:");
for(i=0;i<10;i++)
printf("%d\t",a[i]);
}
