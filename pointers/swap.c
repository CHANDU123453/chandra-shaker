#include <stdio.h>

int main()
{
    int a,b,c,temp;
    printf("enter the 3 values");
    scanf("%d%d%d",&a,&b,&c);
    int *p1,*p2,*p3;
    p1=&a;
    p2=&b;
    p3=&c;
    temp=*p1;
    *p1=*p2;
    *p2=*p3;
    *p3=temp;
    printf("%d\t%d\t%d\t",*p1,*p2,*p3);
}
    
