#include<stdio.h>
int main()
{
int a,b,n,count1=0;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
int i=a;
while(i<=b)
{
int j=1,count=0;
while(j<=b)
{
if(i%j==0)
count++;
j++;
}
if(count==2)
{
printf("%d\n",i);
//count1++;
}
i++;
}
//printf("%d\n",count1);
}

