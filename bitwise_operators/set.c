#include<stdio.h>
int main()
{
int num,pos;
printf("enter the number");//0101
scanf("%d",&num);
printf("enter the position");//3
scanf("%d",&pos);
num|=(1<<pos);//1000
printf("%d\n",num);//0101...1000=1101
}
