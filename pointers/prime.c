//write a c program of prime number interms of pointers

#include<stdio.h>
int prime(int *);//declaration
int main()
{
int num,result;
printf("enter the number");
scanf("%d",&num);
result=prime(&num);
if(result)
printf("prime number");
else
printf("not prime number");
}
int prime(int *num)
{
int i,count=0;
for(i=1;i<=*num;i++)
{
if(*num%i==0)
	count++;
}
return count==2;
}
