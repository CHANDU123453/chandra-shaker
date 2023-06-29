#include<stdio.h>
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);
if(num%2==0)
goto even;
else
goto odd;
even:
printf("it is even");
return 1;
odd:
printf("it is odd");
}
