#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr,*ptr1; 
ptr=malloc(100);
printf("address is %p\n",ptr);
if(ptr==NULL)
{
printf("memory is not allocate");
exit(0);
}
ptr1=realloc(ptr,150);
printf(" new address is %p\n",ptr1);
}
//new size>old size...realloc will allocate new block &copy previous content and freeze previous memory and now returns the new address(ptr1)
//newsize<old size...  data is added to malloc created memory and new block is not allocated 

