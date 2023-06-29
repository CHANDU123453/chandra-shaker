#include<stdio.h>
void chs(char*,char*);
void main()
{
char ch1,ch2;
printf("enter 2 charactres");
scanf("%c %c",&ch1,&ch2);
chs(&ch1,&ch2);
}
void chs(char*p1,char*p2)
{
if(*p1>*p2)
printf("%c is biggest",*p1);
else
printf("%c is biggest",*p2);
}
