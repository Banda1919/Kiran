#include<stdio.h>
#include<string.h>

void swap(char *start_ptr, char *end_ptr)
{
	char temp;
	while(start_ptr<=end_ptr)
	{
		if(*start_ptr!=*end_ptr)
		{
			temp = *start_ptr;
			*start_ptr=*end_ptr;
			*end_ptr=temp;
		}
		start_ptr++,end_ptr--;
	}

}

void main()
{
	char arr[100];
	int flag=0;
	printf("enter string:");
	scanf("%[^\n]%*c",arr);
	char *start_ptr =arr;
	printf("starting char:%c\n",*start_ptr);
	char *end_ptr=arr+strlen(arr)-1;
	printf("end char:%c\n",*end_ptr);
	swap(start_ptr,end_ptr);
	printf("%s",start_ptr);
	end_ptr = start_ptr;
	while(*end_ptr)
	{
		printf("%c ",*end_ptr);
		if((*end_ptr == ' ') && flag == 0)
		{
		//	printf("end char %c\n", *end_ptr);
			swap(start_ptr,end_ptr-1);
			flag=1;
		}
		else if(flag==1 && *end_ptr!=' ')
		{
			start_ptr = end_ptr;
		//	printf("second\n");
			flag=0;
		}

		end_ptr++;
	}
	swap(start_ptr,end_ptr-1);
	printf("\noutput: %s\n", arr);
	
}
