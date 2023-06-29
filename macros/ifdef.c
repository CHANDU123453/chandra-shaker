//The #ifdef preprocessor directive checks if macro is defined by #define. If yes, it executes the code otherwise #else code is executed.
#include<stdio.h>
#define SUN
int main()
{
 int a;
#ifdef SUN
a=2;
#else
printf("enter a value");
scanf("%d",&a);
#endif
printf("%d",a);
}
