#include<stdio.h>
int max(int,int,int);
int min(int,int,int);
int mid(int,int,int);
void main()
{
int a,b,c;
printf("enter the a b c values:");
scanf("%d%d%d",&a,&b,&c);
printf("%d",max(a,b,c));
printf("%d",min(a,b,c));
printf("%d",mid(a,b,c));
}
int max(int a,int b,int c)
{
int max; 
max=a>b?(a>c?a:c):(b>c?b:c);
return max;
}
int min(int a,int b,int c)
{
int min;
min=a<b?(a<c?a:c):(b<c?b:c);
return min;
}
int mid(int a,int b,int c)
{
int mid;
mid=(a+b+c)/3;
return mid;
}
