#include<stdio.h>
int main()
{
int a=100;
float b=12.4;
void *p;
p=&a;
printf("%d\n",*(int *)p);
p=&b;
printf("%f\n",*(float *)p);
}
