#include<stdio.h>
int main()
{
int size,i,j=0,temp[10],arr[20];
printf("enter the size ");
scanf("%d",&size);
printf("enter the original array");
for(i=0;i<size-1;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<size-1;i++)
if(arr[i]!=arr[i+1])
temp[j]=arr[i];
j++;
temp[j]=arr[size-1];
for(i=0;i<j;i++)
arr[i]=temp[i];
for(i=0;i<size-1;i++)
printf("%d\t",arr[i]);
}


