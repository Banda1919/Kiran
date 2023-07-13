#ifndef HEADER
#include"header.h"
#endif

void printrev(STU *head)
{
	if(head == NULL)
	{
		return;
	//	printf("name:%s\n",head->name);
	//	printf("roll number: %d\n",head->rolNo);
	}
	else
		printrev(head->next);
		printf("name:%s\n",head->name);
		printf("roll number: %d\n", head->rolNo);
}
