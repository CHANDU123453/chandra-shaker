#include<stdio.h>
int main()
{
int a[5]={40,23,49,56,21};
int i,largest,second;
if(a[0]>a[1])
{
largest=a[0];
second=a[1];
}
else
{
largest=a[1];
second=a[0];
}
for(i=2;i<5;i++)
{
if(a[i]>largest)
{
largest=a[i];
second=largest;
}
else
largest=largest;
second=a[i];
}
printf("first largest is %d\n",largest);
printf("second largest is %d\n",second);
}

