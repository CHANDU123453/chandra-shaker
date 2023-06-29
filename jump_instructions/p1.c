#include<stdio.h>
int main()
{
int a=1;
loop:if(a<=10)
     {
	    printf("%d\n",a);
	     a=a+1;
	     goto loop;
      
     }
 }
