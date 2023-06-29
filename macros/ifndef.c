//The #ifndef preprocessor directive checks if macro is not defined by #define. If yes, it executes the code otherwise #else code is executed.

/*#include<stdio.h>
#define SUN
int main()
{
int a;
#ifndef SUN
a=10;
#else
printf("enter a value");
scanf("%d",&a);
#endif
printf("%d\n",a);
}*/


//But, if you don't define INPUT, it will execute the code of #ifndef.
#include<stdio.h>
int main()
{
int a;
#ifndef SUN
a=10;
#else
printf("enter a value");
scanf("%d",&a);
#endif
printf("%d\n",a);
}



