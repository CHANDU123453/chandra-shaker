#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,*ptr,*ptr1,n1;
printf("enter the no of  elements");
scanf("%d",&n);
ptr=(int *)malloc(n*sizeof(int));
printf("address is %p\n",ptr);
if(ptr==NULL)
{
printf("memory is not created");
exit(0);
}
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",ptr+i);
}
printf("displaying array elements\n");
for(i=0;i<n;i++)
{
printf("%d\t",*(ptr+i));
}
printf("\nenter the updated no of elements");
scanf("%d",&n1);
ptr1=(int *)realloc(ptr,n1*sizeof(int));
printf("new address is %p\n",ptr1);
printf("enter the array elements\n");
for(i=0;i<n1;i++)
{
scanf("%d",(ptr1+i));
}
printf("displaying updated elements\n");
for(i=0;i<n1;i++)
{
printf("%d\t",*(ptr1+i));
printf("\n");
}
free(ptr1);
}



