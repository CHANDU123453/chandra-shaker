#include<stdio.h>
int main()
{
	int a,b,c;
	char ch;
	printf("enter a and b and operand");
	scanf("%d%d%c",&a,&b,&ch);
	//printf("enter operand");
	//scanf("%c",&ch);
	if(ch=='+')

	{
		c=a+b;
		printf("result is:%d",a+b);
	}
	else if(ch=='-')
	{
		printf("result is:%d",a-b);
	}


}


