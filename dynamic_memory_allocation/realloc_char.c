#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char *ptr,*ptr1;
ptr=(char*)malloc(10);
strcpy(ptr,"chandu");
printf("%s\n%p\n",ptr,ptr);
ptr1=(char*)realloc(ptr,20);
strcat(ptr1,"sunny");
printf("%s\n%p\n",ptr1,ptr);
free(ptr1);
}

