#include<stdio.h>


void add(int x,int y)
{
	printf("value after addition %d\n", x+y);
}
void sub(int x,int y)
{
	printf("value after subtraction %d\n", x-y);
}
typedef void (*FUNPTR)(int,int);


typedef struct DATA{
	int x;
	int y;
	FUNPTR z;
}DAT;
void (*p)(int,int) = add;
void (*q)(int,int) = sub;
FUNPTR pointer[]= {add,sub};

int main()
{
	int x;
	int y;
	printf("enter x and y:");
	scanf("%d%d",&x,&y);
	pointer[0](x,y);
	pointer[1](x,y);
	return 0;
}

