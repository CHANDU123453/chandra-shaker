//addition program using command line argument
#include<stdio.h>
int main(int argc,char *argv[])
{
int i,n,sum=0;
for(i=1;i<argc;i++)
{
sscanf(argv[i],"%d",&n);
sum+=n;
}
printf("sum is %d\n",sum);
}
//scanf() reads data from the keyboard
//sscanf() reads data from buffer and array is the first parameter
