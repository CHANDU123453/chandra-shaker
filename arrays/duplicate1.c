#include<stdio.h>
int main()
{
int i,j=0,temp[20],arr[50],size;
printf("enter the size");
scanf("%d",&size);
printf("enter the original array");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<size-1;i++)
{
if(arr[i]!=arr[i+1])
{
temp[j]=arr[i];
j++;
}
}
//temp[j]=arr[size-1];
printf("after removal of duplication");
for(i=0;i<j;i++)
{
arr[i]=temp[i];
}
}
