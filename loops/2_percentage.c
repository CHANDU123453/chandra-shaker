#include<stdio.h>
int main()
{
	int i=1,n,count=0;
	printf("enter the number of students");
	scanf("%d",&n);
	while(i<=n)
	{
	int m1,m2,m3,total,per1=80;
	float per;
	printf("enter m1 m2 m3");
	scanf("%d%d%d",&m1,&m2,&m3);
	total=m1+m2+m3;
	per=((float)total/300)*100;
	printf("%f",per);
	if(per>per1)
	{
		count++;
		per1=per;
	}
	i++;
       	printf("%d\n",count);

	}

}


