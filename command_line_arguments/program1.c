#include<stdio.h>
int main(int argc,char *argv[])
{
int i;
printf("\n the file is %s:",argv[0]);
printf("\nnumber of arguments is:%d\n",argc);
for(i=1;i<argc;i++)
{
printf("%s\t",argv[i]);
}
}

