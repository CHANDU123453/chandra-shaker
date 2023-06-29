#include<stdio.h>
int main()
{
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	(ch>='A'&&ch<='Z'||ch>='a'&&ch>='z')?printf("%c is alphabet",ch):printf(" is not alphabet");
	return 0;
}
