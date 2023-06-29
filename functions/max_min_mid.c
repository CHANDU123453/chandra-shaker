#include<stdio.h>
void max_min_mid(int,int,int);
void main()
{
int a,b,c;
printf("enter the a b c values:");
scanf("%d%d%d",&a,&b,&c);
max_min_mid(a,b,c);
}
void max_min_mid(int a,int b,int c)
{
int max,min,mid; 
max=a>b?(a>c?a:c):(b>c?b:c);
min=a<b?(a<c?a:c):(b<c?b:c);
mid=(a+b+c)-(max+min);
printf("max is=%d\n",max);
printf("min is=%d\n",min);
printf("mid is=%d\n",mid);
}
