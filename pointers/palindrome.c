//write a palindrome program interms of pointer

#include<stdio.h>
int pal(int*);
int main()
{
int num,result;
printf("enter the number:");
scanf("%d",&num);
result=pal(&num);
if(result)
	printf("palindrome");
else
	printf("not palindrome");
}
int pal(int *num)
{
int sum=0,temp=*num,rem;
while(*num>0)
{
rem=*num%10;
sum=sum*10+rem;
*num=*num/10;
}
return sum==temp;
}

