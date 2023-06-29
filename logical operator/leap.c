#include<stdio.h>
int main()
{
	int y;
	printf("enter y");
	scanf("%d",&y);
         (y%400==0&&y%4==0||y%100!==0)?printf("it is leap year%d",y):printf("not a leap year");
}
