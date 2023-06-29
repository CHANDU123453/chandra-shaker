#include<stdio.h>
void vowel();
void main()
{
vowel();
}
void vowel()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='o'||ch=='i'||ch=='u')
{
	printf("vowel");
}
	else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
	printf("vowel");
}
else
{
printf("not vowel");
}
}


