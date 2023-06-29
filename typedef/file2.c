#include<stdio.h>
typedef struct demo 
{
int roll;
char name[20];
float height;
}row;
int main()
{
row a={121,"varun",5.6};
printf("%d\n%s\n%.1f\n",a.roll,a.name,a.height);
}
