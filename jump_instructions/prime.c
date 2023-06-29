#include<stdio.h>
int main()
{
int i,num,count=0;
printf("enter the number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
count++;
}
}
if(count==2)
{
goto prime;
}
else
{
goto no;
}
prime:
printf("prime");
return 1;
no:
printf("not prime");
}

