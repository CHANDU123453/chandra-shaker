#include<stdio.h>
int main()
{
	int i=0,n;
	printf("enter the n users:");
	scanf("%d",&n);
	while(i<n)
	{
	char ch,ch1,ch2;
	printf("enter the character\n");
	scanf(" %c",&ch);
	ch1=ch+32;
	ch2=ch-32;
	if(ch>='A'&&ch<='Z')
	printf("%c\n",ch1);
	else if(ch>='a'&&ch<='z')
		printf("%c\n",ch2);
	else
		printf("%c",ch);
	i++;
	}
}



