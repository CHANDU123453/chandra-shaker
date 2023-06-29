#include<stdio.h>
void incr();
int main()
{
incr();
incr();
incr();
}
void incr()
{
auto int x=10;
x=x+1;
printf("%d\t",x);
}


