//write a c program to swap two values without using third variable

#include<stdio.h>
int main()
{
int a=10,b=20;
a=a^b;
b=a^b;
a=a^b;
printf("after swapping a is:%d\n",a);
printf("after swapping b is:%d\n",b);
}
