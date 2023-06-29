#include<stdio.h>
int main()
{
int n,c;
printf("enter the  n value:");
scanf("%d",&n);
int i=1;
while(i<=10)
{
c=n*i;
goto table;
table:
printf("%d*%d=%d\n",n,i,c);
i++;
}
}
