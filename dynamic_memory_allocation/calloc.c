#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr,i,n;
printf("enter number of elements");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
if(ptr==NULL)
{
printf("MEMORY IS NOT ALLOCATED");
exit(0);
}
else
{
printf("enter the array of elements");
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
free(ptr);
}
