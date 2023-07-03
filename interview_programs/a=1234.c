#include<stdio.h>
union data
{
int i;
char c[4];
};
int main()
{
int i;
union data info;
info.i=0x1234;
for(i=0;i<2;i++)
{
printf("0x%x\n",info.c[i]);
}
}

