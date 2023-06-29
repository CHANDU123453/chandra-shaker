#include<stdio.h>
#pragma pack(1)
struct data
{
char a;		//by padding it allocates char 4-bytes,int 4-bytes,char 4-bytes=12bytes
int b;		//by packing it allocates char 1-byte,int 4-bytes,char 1-byte=6bytes
char c;
};
void main()
{
struct data d;
printf(" size of structure members is %ld",sizeof(d));
}
