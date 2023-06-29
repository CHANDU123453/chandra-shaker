#include<stdio.h>
int main()
{
printf("line number is :%d\n",__LINE__);
printf("Name of file   :%s\n",__FILE__);
printf("current date   :%s\n",__DATE__);
printf("Current time   :%s\n",__TIME__);
printf("compilation success: %d\n",__STDC__);
}
