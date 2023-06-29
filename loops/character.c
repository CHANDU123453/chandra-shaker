#include<stdio.h>
int main()
{
	int i=0,n;
	printf("enter n value:");
	scanf("%d",&n);
	getchar();
	while(i<n)
	{
		char ch;
		printf("enter the character:");
		scanf("%c",&ch);
		if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
			printf("%c is alphabet\n",ch);
		else if(ch>=48&&ch<=57)
			printf("%c is numeric\n",ch);
		else if(ch>=0&&ch<=47||ch>=58&&ch<=64||ch>=91&&ch<=96||ch>=123&&ch<=127)
			printf("%c is special symbol\n",ch);
		else
			printf("invalid number");
		i++;
	}
}
	


