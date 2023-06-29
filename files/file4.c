#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
int a=10;
char str[20]="embedded systems";
fp=fopen("myfile4.c","w");
if(fp==NULL)
{
printf("file not created");
exit(1);
}
fprintf(fp,"%d\n%s\n",a,str);//syntax:fprintf(file-pointer,format specifier,variables)
fclose(fp);
}
