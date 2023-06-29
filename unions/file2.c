#include<stdio.h>
union demo
{
int a;
char b;
float c;
double d;
};
int main()
{
union demo d;
d.a=10;//garbage
d.b='m';//garbage
d.c=3.2;//garbage
d.d=4.700000;//4.700000 unions hold only last enter value
printf("%d\n%c\n%.1f\n%lf\n",d.a,d.b,d.c,d.d);
printf("size of union is %d\n",sizeof(d));//sizeof union depends on size of largest union member
}


