#include<stdio.h>
void leap();
void main()
{
leap();
}
void leap()
{
int year;
printf("enter the year");
scanf("%d",&year);
if(year%4==0&&(year%400==0||year%100!=0))
{
printf("leap year");
}
else
{
printf("not a leap year");
}
}

