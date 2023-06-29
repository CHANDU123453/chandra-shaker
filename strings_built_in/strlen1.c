#include<stdio.h>
/*int my_str(char*a)
{
int i=0;
while(a[i]!='\0')
{
	i++;
}
return i;
}*/
int my_str(char*a)
{
char *p;
p=a;
while(*p!='\0')
{
p++;
}
return p-a;
}
int main()
{
char a[20];
printf("enter the string");
scanf("%s",a);
printf("%d",my_str(a));
}
