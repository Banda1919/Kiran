#ifndef HEADER
#include"header.h"
#endif


STU *addatend(STU **head)
{
	STU *new=NULL;
	STU *temp = *head;
	new =(STU*)malloc(sizeof(STU));
	printf("Enter rolNumber:");
	scanf("%d",&new->rolNo);
	printf("Enter Name:");
	scanf("%s",new->name);
	if(*head == NULL)
	{
		*head= new;
		new->next = NULL;
	}
	else
	{
		while(temp->next!= NULL)
		{
			temp= temp->next;
		}
		temp->next= new;
		new->next = NULL;
	}
	return *head;
}
