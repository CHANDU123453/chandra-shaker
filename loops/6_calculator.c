#include<stdio.h>
int main()
{
	int a,b,i=1;
	char  ch;
	while(i)
	{
	 printf("enter a char b");
        scanf("%d%c%d",&a,&ch,&b);
	if(ch=='+')
	printf("%d",a+b);
	else if(ch=='-')
	printf("%d",a-b);
	else if(ch=='*')
	printf("%d",a*b);
	else
	i=0;
	}
}
