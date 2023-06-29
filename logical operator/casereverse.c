#include<stdio.h>
int main()
{
	char ch;
	printf("enter alhabet");
	scanf("%c",&ch);
	(ch>=65&&ch<=90)?printf("%c is:",ch=ch+32):(ch>=97&&ch<=122)?printf("%c is",ch=ch-32):printf("others");
	return 0;
}
