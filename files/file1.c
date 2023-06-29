#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp=NULL;
char ch='m';
fp=fopen("myfile1.c","w");
if(fp==NULL)
{
printf("file not created");
exit(1);
}
fputc(ch,fp);
fclose(fp);
}

