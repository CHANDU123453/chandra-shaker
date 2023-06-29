#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
char ch;
fp=fopen("a+mode1.c","a+");
if(fp==NULL)
{
printf("file not exist");
exit(1);
}
fputs("sunny",fp);
rewind(fp);
while(!feof(fp))
{
ch=fgetc(fp);
printf("%c",ch);
}
fclose(fp);
}
