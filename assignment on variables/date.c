/*read a date in the below format, and print it back in another format:

eg., input : 4-5-2000

output: 4/5/2000*/
#include<stdio.h>
int main()
{
	int day,month,year;
	printf("please enter day month year");
	scanf("%d-%d-%d",&day,&month,&year);
	printf("%d/%d/%d",day,month,year);
	return 0;
}
