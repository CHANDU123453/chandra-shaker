#include<stdio.h>
int palind(int);
int main()
{
int num,result;
printf("enter the number");
scanf("%d",&num);
int (*ptr)(int)=&palind;
result=(*ptr)(num);
if(result)
{
printf("palindrome\n");
}
else
{
printf("not palindrome\n");
}
}
int palind(int num)
{
int temp=num,rem,sum=0;
while(num>0)
{
rem=num%10;
sum=sum*10+rem;
num=num/10;
}
return temp==sum;
}

