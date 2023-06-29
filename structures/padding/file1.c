#include<stdio.h>
struct student
{
	int roll;
	char name[20],gen;
	float per;
};
int main()
{
struct student s;
printf("size of  student structure is %d\n",sizeof(s));
}
