#ifndef HEADER
#include"header.h"
#endif



STU *reverse(STU **head)
{
	STU *temp = *head;
	STU *cur= *head;
	STU *pre=NULL;
	if(temp && temp->next == NULL)
	{
		printf("there is only one element in the list\n");
	}
	else
	{
		temp = temp->next;
		cur->next = NULL;

		while(temp)
		{
			pre=temp;
			temp=temp->next;
			pre->next=cur;
			cur = pre;
		}
	}
	return cur;
}

