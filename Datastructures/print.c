#ifndef HEADER
#include"header.h"
#endif

void print(STU *head)
{
	if(head == NULL)
	{
		printf("list is empty\n");
		return;
	}
	else
	{
		while(head)
		{
			printf("Roll Number: %d\nName: %s\n", head->rolNo,head->name);
			head=head->next;
		}
	}
}

		
