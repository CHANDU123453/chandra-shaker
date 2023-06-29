#include<stdio.h>
#include<string.h>
	int pal(char*a)
	{
	int i,count=0;
	for(i=0;i<strlen(a);i++)
	{
	  if(a[i]==a[strlen(a)-i-1])
	  count++;
	}
	return count==i;
	}
	int main()
	{
	char a[100];
	printf("enter the string");
	scanf("%s",a);
	if(pal(a))
	{
	  printf("palindrome");
	}
	else
	{
	printf("not a palindrome");
	}	
	}

