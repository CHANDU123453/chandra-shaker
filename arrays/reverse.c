#include<stdio.h>
int main()
{
int i,a[5],n;
printf("enter the array size");
scanf("%d",&n);
printf("enter the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("reverse of string is");
for(i=n-1;i>=0;i--)
{
	printf("%d\t",a[i]);
}
}

