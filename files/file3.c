//how to write a string into file in c

#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp=NULL;
char str[20]="welcome to Hyderabad";
fp=fopen("myfile3.c","w");
if(fp==NULL)
{
printf("file not created");
exit(1);
}
for(int i=0;str[i]!='\0';i++)
fputc(str[i],fp);
fclose(fp);
}
