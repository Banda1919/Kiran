#ifndef HEADER
#include"header.h"
#endif


void delete(STU **head)
{
	int rolNo;
	STU *tmp= *head;
	STU *pre=NULL;
	printf("please enter rolNo to delete:\n");
	scanf("%d",&rolNo);
	if((*head)->rolNo == rolNo)
	{
		free(*head);
		*head = NULL;
		return;

	}
	while(tmp->rolNo != rolNo)
	{
		pre=tmp;
		tmp=tmp->next;
		
	}
	if(tmp->rolNo == rolNo)
	{
		pre->next = tmp->next;
		free(tmp);
		tmp = NULL;
	}
	else printf("please enter valid input:\n");
}
	
