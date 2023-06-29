#include<stdio.h>
int main()
{
int a[10],i,size,temp;
printf("enter the size");
scanf("%d",&size);
printf("enter the array");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("the adjacent array is\n     ");
for(i=0;i<size;i+=2)
{
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
}
for(i=0;i<size;i++)
{
printf("%d\t",a[i]);
}
}



