#include <stdio.h>

int main()
{
int num,arr[10];
printf("enter the number");
 scanf("%d",&num);
int i=0;
 while(num>0)
{
arr[i]=num%2;
printf("%d\n",arr[i]);
num=num/2;
i++;
}
printf("after coversion is\n");
for( int j=i-1;j>=0;j--)
printf("%d\n",arr[j]);
}

