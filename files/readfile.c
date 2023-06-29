//how to read into file in c program
#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp=NULL;
char str[20];
char ch;
fp=fopen("myfile1.c","r");
if(fp==NULL)
{
printf("file not created");
exit(1);
}
fgets(str,10,fp);//fgets take 3 arguments 
//printf("%s",str);
while(!feof(fp))
{
ch=fgetc(fp);
printf("%c",ch);
}
fclose(fp);
}
