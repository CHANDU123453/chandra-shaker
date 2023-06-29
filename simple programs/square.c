#include<stdio.h>
int main()
{
	int a,area,perimeter;
	printf("enter a value:");
	scanf("%d",&a);
	area=a*a;
	perimeter=4*a;
	printf("area of square:%d\n",area);
	printf("perimeter of square:%d\n",perimeter);
	return 0;
}
