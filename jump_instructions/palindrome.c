#include<stdio.h>
int main()
{
int num,temp=num,rem,sum=0;
printf("enter the number");
scanf("%d",&num);
while(num>0)
{
rem=num%10;
sum=sum*10+rem;
num=num/10;
}
if(sum==temp)
goto pal;
else
goto no;
pal:
printf("palindrome");
no:
printf("not palindrome");
}
