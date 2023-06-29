#include<stdio.h>
struct data
{
int roll;
char name[20],gen1,gen2;
float per;
};
int main()
{
struct data d;
printf("size of structure data is:%ld\n",sizeof(d));
}
