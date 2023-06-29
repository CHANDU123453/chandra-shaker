#include<stdio.h>
struct data
{
char a;
int b;
char c;
};
int main()
{
struct data d;
printf("size of structure member is %ld\n",sizeof(d));
}
