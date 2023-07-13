#include<stdio.h>
int my_strcpy(char *dest, char *src)
{
	if(*src == NULL)
		return 1;
	else
		{
			for(;*src;src++)
			{
				*dest++ = *src;
			}
			*dest = '\0';
		}
	return 0;
}
int my_strlen(char *string)
{
	int cnt=0;
	while(*string++)
	{
		cnt++;
	}
	return cnt;
}
int my_strcmp(char *str1,char *str2)
{
	
	while(*str1)
	{
		if(*str1 != *str2)
		{
			break;
		}
		str1++,str2++;
	}
	return *str1-*str2;
}
char* my_strcat(char *dest, const char *src)
{
	int i= my_strlen(dest);
	for(;*src;src++)
	{
		dest[i++] = *src;
	}
	dest[i]= '\0';
	printf("In fun: %s\n",dest);
	return dest;
}
char* my_strchr(const char* str, char ch)
{
	for(;*str;str++)
	{
		if(*str== ch)
		{
			return str;
		}
	}
	return NULL;
}
char *my_strncat(char *dest, const char *src, const int _size)
{
	int _len= my_strlen(dest);
	int i=0;
	for(i=0; i<_size && *src; i++,src++)
	{
		dest[_len++] = *src;
	}
	dest[_len] = '\0';
	return dest;
}
int my_strncmp(const char *str1,const char *str2,const int _size)
{
	int i=0;
	for(i=0; i<_size && my_strlen(str2)>= _size; i++,str1++,str2++)
	{
		if(*str1 != *str2)
		break;
	}
	return *str1-*str2;

}
void  main()
{
	char src[100];
	char dest[120];
	char string[100];
/*	printf("provide string/n");
	scanf("%[^\n]%*c",string); */
	my_strcpy(src,"hello");
	if(my_strcpy(dest,"Saikiran ") ==0)
		printf("string is %s\n", dest);
	else
		printf("please provide valid source Thanks You\n");
	printf("length of the string: %d\n",my_strlen(dest));
	printf("the value of %d\n",my_strcmp("abcd","Bbcd"));
	my_strcat(dest,src);
	printf("string after strcat:%s\n",dest);
	printf("first occurance %c\n",*my_strchr("saikiran", 'i'));
	printf("after append n charcters: %s\n",my_strncat(dest,"india", 3));
	printf("After compare n characters: %d\n", my_strncmp("Saikiran", "Saijiran", 4));
}
