#include<stdio.h>
int main()
{
	int i=0,n;
	printf("enter the n students:");
	scanf("%d",&n);
	while(i<n)
	{
		int m,p,c;
		printf("enter maths physics and chemistry marks:\n");
		scanf("%d%d%d",&m,&p,&c);
		if(m>=60&&p>=50&&c>=40)
			if(m+p+c>=200||m+p>=150)
			printf("he is eligible\n");
		  
	     		else
			printf("not eligible\n");
		else
			printf("not eligible\n");
	i++;
	}
}
		
