#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp=NULL;
char str[20];
char ch;
fp=fopen("w+mode1.c","w+");
if(fp==NULL)
{
printf("error");
exit(1);
}
fputs("sunny",fp);
while(!feof(fp))
{
ch=fgetc(fp);
printf("%c",ch);
}
fclose(fp);
}
