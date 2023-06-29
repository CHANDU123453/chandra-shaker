#include<stdio.h>
int even(int);
void main()
{
int num;
printf("enter the number");
scanf("%d",&num);
if(even(num))
{
printf("even");
}
else
printf("odd");
}
int even( int num)
{
if(num%2==0)
{
return 1;
}
return 0;
}
