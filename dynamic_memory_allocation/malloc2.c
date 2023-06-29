#include<stdio.h>
#include<stdlib.h>
int main()
{
char *str;
int size;
printf("enter the size of char array");
scanf("%d",&size);
str=(char *)malloc(size*sizeof(char));// dynamically allocate memory using malloc
if(str==NULL)
{
printf("memory is not allocated");
exit(1);
}
printf("enter the string");
scanf("%s",str);
printf("%s\n",str);
free(str);// free the memory allocated using malloc 
}



