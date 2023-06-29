#include<stdio.h>
int main()
{
int i,pos,num,a[50],size;
printf("enter the size of array");
scanf("%d",&size);
printf("enter the origial array");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter the new element ");
scanf("%d",&num);
printf("enter the position");
scanf("%d",&pos);
if(pos<=0||pos>size+1)
{
printf("invalid");
}
else
{
for(i=size;i>=pos-1;i--)
{
a[i+1]=a[i];
}
a[pos-1]=num;
size++;
}
printf("after insertion new array is");
for(i=0;i<size;i++)
{
printf("%d\t",a[i]);
}
}
