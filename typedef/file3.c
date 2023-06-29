#include<stdio.h>
typedef struct demo
{
	int a;
	int b;
	float c;
}first;
int main()
{
first f;
first *p;
p=&f;
f.a=10;
f.b=20;
f.c=4.6;
printf("%d\n",p->a);
printf("%d\n",p->b);
printf("%f\n",p->c);
}
/*typedef keyword reduces the length of the code and complexity of data types. It also helps in understanding the program.
 */
