#include<stdio.h>
int main()
{
int i, a[5],large,small;
printf("enter the array");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
large=a[0];
small=a[0];
for(i=1;i<5;i++)
{
if(a[i]>large)
{
	large=a[i];
}
if(a[i]<small)
{
small=a[i];
}
}
printf("largest number is:%d\n",large);
printf("smallest number is:%d\n",small);
}
