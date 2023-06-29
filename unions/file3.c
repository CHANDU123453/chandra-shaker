//accessing union elements
#include<stdio.h>
#include<string.h>
union student
{
int roll;
char name[20],gender;
float height;
};
int main()
{
union student s;
union student *p;
s.roll=111;
strcpy(s.name,"chandu");//all members share the same memory in union
s.gender='m';
s.height=5.8;
printf("roll is %d\n",s.roll);//garbage
printf("name is %s\n",s.name);//garbage
printf("gender is %c\n",s.gender);//garbage
printf("height is %.1f\n",s.height);//height=5.8//unions holds only last value
printf("size of union is %ld",sizeof(s));//size of union based on largest union member 
printf("\n");
//printf("roll is %d\n",p->roll);//garbage
//printf("name is %s\n",p->name);//garbage
//printf("gender is %c\n",p->gender);//garbage
//printf("height is %.1f\n",p->height);
}

