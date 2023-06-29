#include<stdio.h>
int main()
{
int i=1,n,s;
float per,top;
printf("enter the number of students:");
scanf("%d",&n);
printf("enter how many subjects do you want:");
scanf("%d",&s);
while(i<=n)
{
   	int j=1,t=0,m;
	while(j<=s)
	{
	printf("enter the marks:");
	scanf("%d",&m);
	t=t+m;
	j++;
	}
per=((float)t/s);
printf("%f\n",per);
if(i==1)
{
top=per;
}
else
top=top>per?top:per;
i++;
}
printf("topper is:%f",top);
}
