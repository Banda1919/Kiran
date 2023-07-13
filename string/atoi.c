#include<stdio.h>
int atoi(const char* str)
{
	int sum=0;
	while(*str)
	{
		if(*str >= '0' && *str <= '9')
		{
			sum = sum * 10 + *str-'0';
		}
		else
			break;
		str++;
	}
	return sum;
}
float atof(const char* str)
{
	int result=0;
	float deci=0;
	int deci_flag=0;
	float val = 1;
	while(*str)
	{
		printf("char %c\n",*str);
		if(*str>= '0' && *str <= '9')
		{
			if(deci_flag==0)
			{
				result = result*10 + *str -'0';
			}
			else
			{	
			//	deci = deci*10 + (*str-'0');
				result = result*10 + *str -'0';
				val= (0.1*val);		
			}
		}
		else if(*str == '.')
		{
			deci_flag=1;
		}
		str++;
	}
	printf("value of v: %f result %d\n",val, result);
		return result*val;
}

int main()
{
	char arr[100]= "1234";
	char arr2[200]= "23.23";
	printf("integer value is: %d\n", atoi(arr));
	printf("float value is:%0.2f\n",atof(arr2));
}
