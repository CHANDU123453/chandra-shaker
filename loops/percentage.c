#include<stdio.h>
int main()
{ 
	int i=0,n;//while n=number of students
	printf("enter the students");
	scanf("%d",&n);
	while(i<n)
	{
	int total,m1,m2,m3,m4,m5,m6;
	float per;
        printf("enter 6 subjects marks\n");
        scanf("%d\n%d\n%d\n%d\n%d\n%d",&m1,&m2,&m3,&m4,&m5,&m6);
        total=m1+m2+m3+m4+m5+m6;
        per=((float)total/600)*100;

	if(per>=80&&per<=100)
		printf(" is honour");
	else if(per>=60&&per<=79)
		printf(" is first class");
	else if(per>=50&&per<=59)
		printf(" is second class");
	else if(per>=40&&per<=49)
		printf(" is third class");
	else if(per>=0&&per<=39)
		printf(" is fail");
	else
		printf("invalid");
	i++;

	}
}
	
