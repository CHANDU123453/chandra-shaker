#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr,i,n,sum=0;
printf("enter number of elements");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
if(ptr==NULL)
{
printf("Sorry! unable to allocate memory");
exit(0);
}
printf("enter the array of elements");
for(i=0;i<n;i++)
{
scanf("%d",ptr+i);
}
for(i=0;i<n;i++)
{
sum+=*(ptr+i);
}
printf("sum of array is %d\n",sum);
free(ptr);
}
