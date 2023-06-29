/*6) Read a 4 digit integer into a variable, using scanf and print it in the below format using escape sequences.
eg., input: 3467
3
  4
     6
        7
*/
#include<stdio.h>
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	printf("%d\b\b\b   \n",num);
	printf("%d\b\b  \r \n",num);
	printf("%d\b \r\b\b  \n",num);
	printf("%d\r\b\b\b   \n",num);
	return 0;
}
