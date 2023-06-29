#include<stdio.h>
//if you don't define MACRO, it will ask user to enter a number.
int main()
{
int a;
#ifdef SUN
a=2;
#else
printf("enter a value");
scanf("%d",&a);
#endif
printf("%d\n",a);
}
