//write a program reverse of number in pointer version

#include<stdio.h>
void rev(int *);//declaration
int main()
{
int num,result;
printf("enter the number");
scanf("%d",&num);
rev(&num);
}
void rev(int *num)
{
int sum=0,rem;
while(*num>0)
{
rem=*num%10;
sum=sum*10+rem;
*num=*num/10;
}
printf("reverse of a number is %d\n",sum);
}
