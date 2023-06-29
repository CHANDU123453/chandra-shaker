#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,m6,total;
	float per;
	printf("enter the 6 subjects marks");
	scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
	total=m1+m2+m3+m4+m5+m6;
        per=(float)total/600*100;
	if(per>=80&&per<=100)
	{
		printf("honour:%.2f",per);
	}
	else if(per>=60&&per<80)
	{
		printf("first division:%.2f",per);
	}
	else if(per>=50&&per<60)
	{
		printf("second division:%.2f",per);
	}
	else if(per>=40&&per<50)
	{
		printf("third division:%.2f",per);
	}
	else
	{
		if(per<40)
		{
			printf("fail:%.2f",per);
		}
	}
}


	

