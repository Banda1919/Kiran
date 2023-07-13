#include<stdio.h>
#include<string.h>

void main()
{
char str[100];
printf("please enter your input:");
scanf("%[^\n]%*c",str);
char *p = str;
while(*p)
{
	if(*p == ' ')
	{
		memmove(p,p+1,strlen(p+1)+1);
		p--;
	}
	p++;

}

printf("given string: %s\n",str);
return;
}
