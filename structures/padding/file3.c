#include<stdio.h>
struct data
{
int roll;
char name[20],gen1,gen2,gen3,gen4,gen5;
float per;
};
int main()
{
struct data d;
printf("size of structure member is %ld",sizeof(d));
}
