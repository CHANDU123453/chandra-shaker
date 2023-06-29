#include<stdio.h>
#include"file2.c"
static int a=10;
int main()
{
printf("hyderabad\n");
add();
sub();
}
void add()
{
printf("value of a is %d\n",a);
}
