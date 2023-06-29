#include<stdio.h>
struct mystruct
{
int a,b,result;
};
void add(struct mystruct);
int main()
{
struct mystruct s;
printf("enter the a and b values\n");
scanf("%d%d",&s.a,&s.b);
add(s);
}
void add(struct mystruct s)
{
s.result=s.a+s.b;
printf("result is:%d\n",s.result);
}
