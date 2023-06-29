//program displays true size of a structure using __attribute((packed))
#include<stdio.h>
struct a
{
int roll;
char name[20],gen __attribute__((aligned(1)));//requested alignment should be positive number of 2
}__attribute__((packed));
int main()
{
struct a A;
printf("size is %ld\n",sizeof(A));
}
