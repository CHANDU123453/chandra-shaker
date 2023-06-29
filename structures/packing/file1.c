#include<stdio.h>
#pragma pack(1)
struct data 
{
char a;		//by padding compiler allocates 4-bytes for char,4-bytes for integer
int b;		//by packing it allocates 1-byte for char,4-bytes for integer
};
int main()
{
struct data d;
printf("size of structure member is %ld\n",sizeof(d));
}

