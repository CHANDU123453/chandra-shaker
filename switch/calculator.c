#include<stdio.h>
int main()
{
char ch;
int a,b;
printf("enter a b values and operand:");
scanf("%d%d%c",&a,&b,&ch);
switch(ch)
{
	case '+':printf("result is:%d",a+b);
		 break;
	case '-':printf("result is:%d",a-b);
		 break;
	case '*':printf("result is:%d",a*b);
		 break;
	case '/':printf("result is:%d",a/b);
		 break;
	case '%':printf("resul is:%d",a%b);
		 break;
	default:printf("wrong entry");
		break;
	}
}


	

