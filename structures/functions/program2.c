#include<stdio.h>
struct date
{
int day;
char mon[10];
int year;
};
void demo(struct date);
int main()
{
struct date d;
printf("enter day month and year");
scanf("%d%s%d",&d.day,d.mon,&d.year);
demo(d);
}
void demo(struct date d)
{
printf("day=%d\n",d.day);
printf("month=%s\n",d.mon);
printf("year=%d\n",d.year);
}


