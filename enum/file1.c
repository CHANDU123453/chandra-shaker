#include<stdio.h>
enum directions{north,south,east,west};//syntax:enum flag{integral const1,integral const2....N}
int main()
{
enum directions d;
d=north;
printf("%d\n",d);
return 0;
}

