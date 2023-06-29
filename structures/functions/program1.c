#include<stdio.h>
struct date
{
int day;
int mon;
int year;
};
void demo(int,int,int);
int main()
{
struct date d;
printf("enter the day month year");
scanf("%d%d%d",&d.day,&d.mon,&d.year);
demo(d.day,d.mon,d.year);
}
void demo(int x,int y,int z)
{
	printf("day=%d\n",x);
	printf("month=%d\n",y);
	printf("year=%d\n",z);
}
