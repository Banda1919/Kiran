#include<stdio.h>

struct __attribute__((packed)) data{
	int x;
	char y;
	char z;
};
struct bitfield{
	char a:1;
	char b:5;
};

void main()
{
	printf("sizeof structure %d bitfield %d\n",sizeof(struct data),sizeof(struct bitfield));
}
