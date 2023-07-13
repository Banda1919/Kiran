#include<stdio.h>

//const static int x=7;

const int x;
const int z=100;

int main()
{
//	const static int x= 12;
	int *y=&x;
	//*y= 100;
	printf("x=%d\n",x);
	return 0;
}
