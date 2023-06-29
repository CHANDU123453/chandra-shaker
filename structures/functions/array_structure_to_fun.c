#include<stdio.h>
struct student
{
int roll;
char name[10];
float height;
};
void display(struct student s[]);//declaration
int main()
{
struct student s[2]={{121,"chandu",5.6},{122,"sunny",5.8}};
display(s);
return 0;
}
void display(struct student s[])
{
int i;
for(i=0;i<2;i++)
{
printf("roll no=%d\n",s[i].roll);
printf("student name=%s\n",s[i].name);
printf("student height=%.1f\n",s[i].height);
printf("\n");
}
}

