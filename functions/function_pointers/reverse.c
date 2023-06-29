#include<stdio.h>
int rev(int);
int main()
{
int num,result;
printf("enter the number");
scanf("%d",&num);
int (*ptr)(int)=&rev;
result=(*ptr)(num);
printf("reverse of given number is %d\n",result);
}
int rev(int num)
{
int sum=0,rem;
while(num>0)
{
rem=num%10;
sum=sum*10+rem;
num=num/10;
}
return sum;
}
