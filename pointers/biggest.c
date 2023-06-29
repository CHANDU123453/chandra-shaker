#include<stdio.h>
int max(int*,int*,int*);
int main()
{
int a,b,c;
printf("enter a b and c values:");
scanf("%d%d%d",&a,&b,&c);
printf("%d\n",max(&a,&b,&c));
}
int max(int *p1,int *p2,int *p3)
{
int max;
max=*p1>*p2?(*p1>*p3?*p1:*p3):(*p2>*p3?*p2:*p3);
return max;
}
