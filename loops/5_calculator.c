#include<stdio.h>
int main()
{
char ch;
int a,b,n=1,i=1;
while(n)
{
printf("enter a character b value:\n");
scanf("%d\n%c%d",&a,&ch,&b);
switch(ch)
{
case '+':printf("%d",a+b);
	 break;
case '-':printf("%d",a-b);
	 break;
case '*':printf("%d",a*b);
	 break;
case '%':printf("%d",a%b);
	 break;
case '/':printf("%d",a/b);
	 break;
default:
	 printf("invalid\n");
	 break;
}
printf("want to continue");
scanf(" %c",&ch);
if(ch=='n')
n=0;
}
}
