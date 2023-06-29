/*#include<stdio.h>
void my_strcpy(char*,char*);
void main()
{
char a[20],b[10];
printf("enter the string");
scanf("%s",a);
my_strcpy(a,b);
printf(" copied string a into b string:%s\n",b);
}
void my_strcpy(char*a,char*b)
{
char *p1,*p2;
p1=a;
p2=b;
while(*p1!='\0')
{
*p2=*p1;
p1++;
p2++;
}
*p2='\0';
}
.................................................................................................*/
#include<stdio.h>
void my_strcpy(char*,char*);
void my_strcpy(char*a,char*b)
{
int i=0;
while(a[i]!='\0')
{
b[i]=a[i];
i++;
}
b[i]='\0';
}
void main()
{
char a[20],b[10];
printf("enter the string");
scanf("%s",a);
my_strcpy(a,b);
printf(" copied string a into b string:%s\n",b);
}

