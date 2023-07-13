#include<stdio.h>
#define _size(x) ({__typeof__(x) y;((char*)(&y+1)-(char*)(&y));})
void main()
{
	int a=20;
	printf("%d", _size(int));
}
