#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp=NULL;
char str[20];
fp=fopen("myappend.c","a");
if(fp==NULL)
{
printf("file not created");
exit(1);
}
printf("enter the string to be append");
gets(str);
fprintf(fp,"\n%s",str);//fputs(str,fp);
fclose(fp);
}
