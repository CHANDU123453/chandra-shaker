include<stdio.h>
int main()
{
	int num,sum=0,rem;
	printf("enter the number");
	scanf("%d",&num);//12
	while(num>0)
	{
		rem=num%10;//2
		sum=sum+rem;//2
		num=num/10;//1
		
	}
	printf("result is:%d",sum);
}



