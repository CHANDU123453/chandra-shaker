#include<stdio.h>
int main()
{
int i,p,p1,n,count=0;
printf("enter the number starting from");
scanf("%d",&p);
printf("enter the number upto:");
scanf("%d",&p1);
for(i=p;i<=p1;i++)
{
int j,a=0;
for(j=1;j<=p1;j++)
{
if(i%j==0)
a++;
}
if(a==2)
{
printf("%d\n",i);
count++;
}
}
printf("%d\n",count);
}

