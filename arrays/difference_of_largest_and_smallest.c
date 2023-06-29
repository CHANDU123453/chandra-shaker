#include<stdio.h>
int main()
{
int a[10],i,size,largest,smallest,difference;
printf("enter the size");
scanf("%d",&size);
printf("enter the array");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
	largest=smallest=a[0];
	if(a[i]>largest)
		largest=a[i];
	if(a[i]<smallest)
		smallest=a[i];
}
printf("largest is %d\n",largest);
printf("smallest is%d\n",smallest);
difference=largest-smallest;
printf("diffrence is %d\n",difference);
}



