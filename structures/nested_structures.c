#include<stdio.h>
#include<string.h>
struct stu_marks
{
int math,phy,chem,total;
float avg;
};
struct student
{
int roll;
char name[40], gender;
int age;
struct stu_marks m;
};
int main()
{
struct student s;
s.roll=1814120;
strcpy(s.name,"shiva");
s.gender='M';
s.age=23;
s.m.math=95;
s.m.phy=96;
s.m.chem=97;
s.m.total=s.m.math+s.m.phy+s.m.chem;
s.m.avg=(float)s.m.total/3;
printf("displaying students information");
printf("\nroll number is :%d",s.roll);
printf("\nname is        :%s",s.name);
printf("\n gender is     :%c",s.gender);
printf("\n age is 	 :%d",s.age);
printf("\n...............................\n");
printf("\ndisplaying students marks\n");
printf("\nmaths marks 	   :%d",s.m.math);
printf("\nphysics marks    :%d",s.m.phy);
printf("\nchemistry marks  :%d",s.m.chem);
printf("\n total marks     :%d",s.m.total);
printf("\n average is      :%.2f",s.m.avg);
}
