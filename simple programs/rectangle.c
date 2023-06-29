#include<stdio.h>
int main()
{
	int length,width,area,perimeter;
	printf("enter length and width:");
	scanf("%d%d",&length,&width);
	area=length*width;
	perimeter=2*(length+width);
	printf("area of rectangle is:%d\n",area);
	printf("perimeteter of rectangle:%d\n",perimeter);
	return 0;
}
