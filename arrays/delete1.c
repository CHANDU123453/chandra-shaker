#include<stdio.h>
int main()
{
int i,a[5],m,n;
printf("enter th original array");
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
printf("enter the delete elements");
scanf("%d%d",&m,&n);
printf("after delete array is\n:");
for(i=0;i<5;i++)
{
if(a[i]==m||a[i]==n)
{
continue;
}
printf("%d\t",a[i]);
}
}

