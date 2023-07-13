#include<stdio.h>
int poweroftwo(int num,int pow)
{
	int result=1;
	while(pow>0)
	{
		result = result*num;
		pow--;
	}
	return result;
}
void main()
{
 short int x= 0xFF;
 int result= 0;
 for(int i=0;i<sizeof(x)*8;i++)
 {
	if(x>>i & 1)
	result = result+poweroftwo(2,i);
 }
printf("value after conversion %d\n",result);
}
