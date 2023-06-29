#include<stdio.h>
int main()
{
int num,result;
printf("enter the number");
scanf("%d",&num);
result=num%2==0;
switch(result)
{
	case 1:printf("%d is even number",num);
	       break;
	case 0:printf("%d is odd number",num);
		break;
}
}
	 
