#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr,i,n;
printf("enter number of elements");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
if(ptr!=NULL)
{
printf("memory is created using malloc:\n");
printf("enter the array of elements");//getting inputs from user
for(i=0;i<n;i++)
{
scanf("%d",ptr+i);
}
printf("displaying array of elements");
for(i=0;i<n;i++)
{
printf("%d\t",*(ptr+i));
printf("\n");
}
}
else
{
printf("memory is not allocated");
}
free(ptr);
}
