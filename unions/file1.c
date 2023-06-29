#include<stdio.h>
/*struct abc
{
int a;
char b;
float c;
};
int main()
{
struct abc s;
s.a=1;
s.b='m';
s.c=4.6;
printf("%d\n",s.a);//1
printf("%c\n",s.b);//m
printf("%f\n",s.c);//4.6
printf("size of structure is %ld",sizeof(s));//memory is allocated for all members i.e 4+4+4=12bytes
}*/
union abc
{
int a;
char b;
float c;
};
int main()
{
union abc s;
s.a=1;
s.b='m';
s.c=4.6;
printf("%d\n",s.a);//garbage
printf("%c\n",s.b);//ascii value/garbage
printf("%f\n",s.c);//4.6 only one member can be accesed at at a tim
printf("size of structure is %ld\n",sizeof(s));//size of union is based on size of largest member of union
}
