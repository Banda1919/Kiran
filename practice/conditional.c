#include<stdio.h>

int main()
{
	int a=10,b=15,c=7;
	int max;
	max= a>b?a>c?a:c:b>c?b:c;
	printf("max = %d\n", max);

}
