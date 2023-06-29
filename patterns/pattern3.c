/*print the below patterns using nested loops:
 * * * * *
   * * * *
     * * *
       * *
         * */
#include<stdio.h>
int main()
{
int i=5,row=5;
while(i>0)
{
	int space=1;
	while(space<=(row-i))
	{
	printf(" ");
	space++;
	}
	int j=1;
	while(j<=i)
	{
	printf("*");
	j++;
	}
	printf("\n");
	i--;
}
}
