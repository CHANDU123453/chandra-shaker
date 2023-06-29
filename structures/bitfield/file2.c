#include<stdio.h>
struct data 
{
unsigned int day:5;
unsigned int mon:4;
unsigned int year:12;
};
int main()
{
struct data d={28,7,2000};
printf("sizeof the members is %ld\n",sizeof(d));
printf("%d\n%d\n%d\n",d.day,d.mon,d.year);
}
/*struct data
{
int day;
int mon;
int year;
};
int main()
{
struct data d={28,7,2000};
printf("size of members is %ld\n",sizeof(d));
}*/
