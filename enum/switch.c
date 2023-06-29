#include<stdio.h>
enum days{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
int main()
{
int day;
printf("enter the day number");
scanf("%d",&day);
switch(day)
{
case sunday:printf("today is sunday\n");
 break;
case monday:printf("today is monday\n");
break;
case tuesday:printf("today is tuesday\n");
break;
case wednesday:printf("today is wednesday\n");
break;
case thursday:printf("today is wednesday\n");
break;
case friday:printf("today is thursday\n");
break;
case saturday:printf("today is friday\n");
break;
default:printf("invalid\n");
}
}



