#include<stdio.h>
struct demo
{
unsigned int m:2;
unsigned int n:3;
};
int main()
{
struct demo d;
d.m=3;//normally it allocates 2bytes+2bytes=4bytes so total=32bits
d.n=7;//by using bitfields number-3 it allocates 2bits so 16-2=14bits are wasted interms of bytes
//for number 7 it requires 3bits so 16-3=13bits are wasted interms of bytes
printf("size of unsigned int is %ld\n",sizeof(d));
}

/*struct demo
{
int a;
int b;
};
int main()
{
struct demo d;
d.a=3;
d.b=7;
printf("size of member is:%ld\n",sizeof(d));
}*/

