#include<stdio.h>
int main()
{
	int radius;
        float pi=3.14,area,perimeter;
	printf("enter radius value:");
	scanf("%d",&radius);
	area=pi*radius*radius;
	perimeter=2*pi*radius;
	printf("area of circle:%f\n",area);
	printf("perimeter of circle:%f\n",perimeter);
	return 0;
}
