#include<stdio.h>
int main()
{
int num,rem,count=0;
printf("enter the number:");
scanf("%d",&num);
do
{
rem=rem%10;
count++;
num=num/10;

}
while(num>0);
printf("%d",count);
}
