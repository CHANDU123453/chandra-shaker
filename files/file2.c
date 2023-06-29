//how to write a string into file in c

#include<stdio.h>
int main()
{
FILE *fp;
char str[20];
fp=fopen("myfile2.c","w");
printf("enter the string");
gets(str);
fputs(str,fp);
fclose(fp);
}
