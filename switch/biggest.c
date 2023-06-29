#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a and b values:");
scanf("%d%d",&a,&b);
c=a>b;
switch(c)
{
	case 1:printf("%d is biggest",a);
	      break;
	default:printf("%d is biggest",b);
		break;
}
}

