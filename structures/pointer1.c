#include<stdio.h>
struct obj 
{
	int a,b,result;

};
int main()
{
struct obj s;
struct obj *p;
p=&s;
s.a=10;
s.b=20;
s.result=s.a+s.b;
printf("result is %d\n",p->result);//arrow operator
printf("result is %d\n",s.result);//dot operator
printf("result is %d\n",(*p).result);//pointer with dot operator
}

