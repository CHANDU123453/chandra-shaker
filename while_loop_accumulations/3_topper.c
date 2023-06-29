#include<stdio.h>
int main()
{
int topper,avg=0;

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
	printf("%f\n",per);
	avg=(avg+per)/n;

	if(i==0)
		topper=per;
	else
		topper=topper>per?topper:per;

	i++;
	}
	printf("%d is topper",topper);
	printf("%d",avg);
}

