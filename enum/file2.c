#include<stdio.h>
enum directions{north=11,south,east=16,west};//syntax:enum flag{integral const1,integral const2....N}
int main()
{
enum directions d;//north=1,next value is assigned with previous value+1
d=south;
printf("%d\n",d);
}

