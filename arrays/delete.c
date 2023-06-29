#include<stdio.h>
int main()
{
int i,a[5],m;
printf("enter th original array");
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
printf("enter the delete element");
scanf("%d",&m);
printf("after delete array is\n:");
for(i=0;i<5;i++)
{
if(a[i]==m)
{
continue;
}
printf("%d\t",a[i]);
}
}

