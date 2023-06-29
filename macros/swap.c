#include<stdio.h>
#define SWAP(a,b) a=a^b,b=a^b,a=a^b;
int main()
{
int a=10,b=20;
SWAP(a,b);
printf("after swapping a is %d\n",a);
printf("after swapping b is %d\n",b);
}
			
