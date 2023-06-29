#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp=NULL;
fp=fopen("r+moded1.c","r+");
if(fp==NULL)
{
printf("file not created");
exit(1);
}
fputc('m',fp);
//fputs("who",fp);
fclose(fp);
}
