/*6) Read a 4 digit integer into a variable, using scanf and print it in the below format using escape sequences.
eg., input: 3467

output : 
3
34
346
3467*/
#include<stdio.h>
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	printf("%d\b\b\b   \n",num);
	printf("%d\b\b  \n",num);
	printf("%d\b \n",num);
	printf("%d\n",num);
	return 0;
}
