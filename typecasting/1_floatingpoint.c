#include<stdio.h>
int main()
{
       float a=456.789;
       int b,c,d;
       b=(int)a%10;//456%10=6
       c=a*10;//4567.89
       d=(int)c%10;//4567=7
       printf("%d and %d",b,d);
       return 0;
}
