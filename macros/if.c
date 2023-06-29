//The #if preprocessor directive evaluates the expression or condition. If condition is true, it executes the code 
//otherwise #elseif or #else or #endif code is executed.

#include<stdio.h>
#define NUM 10
int main()
{
int a;
printf("enter the number");
scanf("%d",&a);
#if(NUM==a)
printf("chandu");
#else
printf("sunny");
#endif
}
