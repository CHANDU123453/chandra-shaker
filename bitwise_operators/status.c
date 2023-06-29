#include<stdio.h>
int main()
{
int num,pos,bit;
printf("enter the number");//0101
scanf("%d",&num);
printf("enter the position");//3
scanf("%d",&pos);
if(num&(1<<pos)==0)//0101&1000....>0000
{
bit=0;
printf("%d\n",bit);
}
else
{
bit=1;
printf("%d\n",bit);
}
}
