#include<stdio.h>
void display()
{
if(n<1)
{
return n;
else
printf("%d\n",n);
display(n-1);
printf("%d\n",n);
}
}
int main()
{
int n=3;
display(n);
}
