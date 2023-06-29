/*print the below patterns using nested loops:
          *
       *  * 
     * *  *
   * * *  *
* * *  *  * */
#include<stdio.h>
int main()
{
int i=1,row=5;
while(i<=row)
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
	i++;
}
}
