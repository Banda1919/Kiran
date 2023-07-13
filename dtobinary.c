#include<stdio.h>

void main()
{
	short int x = -25;
	unsigned short int u_x= (unsigned int)x;
	for(int i=(sizeof(x)*8)-1;i>=0;i--)
	{
		if((x >>i)&1)
			printf("1 ");
		else
			printf("0 ");
	}
	printf("\n");
}
