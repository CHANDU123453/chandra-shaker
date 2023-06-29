#include<stdio.h>
struct date
{
int day;
char mon[10];
int year;
};
void demo(struct date *);
int main()
{
struct date d;
printf("enter the day month year");
scanf("%d%s%d",&d.day,d.mon,&d.year);
demo(&d);
}
void demo(struct date *p)
{
printf("day=%d\n",p->day);
printf("month=%s\n",p->mon);
printf("year=%d\n",p->year);
//printf("day=%d\n",(*p).day);
//printf("month=%s\n",(*p).mon);
//printf("year=%d\n",(*p).year);
}
