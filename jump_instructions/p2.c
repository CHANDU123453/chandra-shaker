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
printf("even");
odd:
printf("odd");
}

