#include<stdio.h>
int arm(int);//declaration
int main()
{
int num,result;
printf("enter the number");
scanf("%d",&num);
int (*ptr)(int)=&arm;
result=(*ptr)(num);
if(result)
	printf("it is armstrong");
else
	printf("not armstrong");
}
int arm(int num)
{
int sum=0,rem,temp=num;
while(num>0)
{
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
}
return (sum==temp);
}
