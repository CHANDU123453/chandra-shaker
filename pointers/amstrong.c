//write amstrong program interms of pointer

#include<stdio.h>
int arm(int *);//declaration
int main()
{
int num,result;
printf("enter the number");
scanf("%d",&num);
result=arm(&num);
if(result)
	printf("armstrong number");
else
	printf("not armstrong ");
}
int arm(int *num)
{
int sum=0,rem,temp=*num;
while(*num>0)
{
rem=*num%10;
sum=sum+(rem*rem*rem);
*num=*num/10;
}
return temp==sum;
}
