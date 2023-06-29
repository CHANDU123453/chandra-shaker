#include<stdio.h>
int main()
{
int i=1,n,count=0;
printf("enter the number of students:");
scanf("%d",&n);
while(i<=n)
{
	int j=1,s=6,m,t=0;
	float per1=80,per;
	while(j<=s)
	{
	printf("enter the marks:");
	scanf("%d",&m);
	t=t+m;
	j++;
	}
per=((float)t/s);
printf("%f\n",per);
if(per>per1)
{
count++;
}
i++;
}
printf("count is %d\n",count);
}
