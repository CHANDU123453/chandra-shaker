#include<stdio.h>
struct data
{
char a;
char b;
int c;
};
int main()
{
struct data d;
printf("size of structure member is %ld\n",sizeof(d));
}
