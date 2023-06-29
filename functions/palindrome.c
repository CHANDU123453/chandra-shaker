#include<stdio.h>
int palindrome(int);
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(palindrome(num))
	{
		printf("palindrome\n");
	}
	else
	{
		printf("not a palindrome\n");
	}
}
int palindrome(int num)
{
	int sum=0,rem,temp=num;
	while(num>0)
	{
	rem=num%10;
	sum=sum*10+rem;
	num=num/10;
	}
	return(sum==temp);
}

	
