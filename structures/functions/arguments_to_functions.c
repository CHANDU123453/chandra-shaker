//pass individual members of a struture as arguments to functions
#include<stdio.h>
struct mystruct
{
int a,b,result;
};
void add(int,int);//declaration
int main()
{
struct mystruct s;
printf("enter the a and b values");
scanf("%d%d",&s.a,&s.b);
add(s.a,s.b);
}
void add(int a,int b)//definition
{
printf("result is %d\n",a+b);
}


