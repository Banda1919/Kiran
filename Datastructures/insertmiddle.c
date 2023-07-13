#ifndef HEADER
#include"header.h"
#endif

STU *insertmiddle(STU **head)
{
	STU *new=(STU*)malloc(sizeof(STU));
	STU *pre,*next= *head;
	STU *mid=*head;
	printf("plese enter a rolNo:\n");
	scanf("%d",&new->rolNo);
	printf("enter name:\n");
	scanf("%s",new->name);
	if((*head)->next == NULL)
	{
		printf("Only list have one element so adding at begining\n");
		new->next = *head;
		*head = new;
	}
	else
	{
		while(next&& (next->next!= NULL) && (next->next->next!= NULL))
		{
			next= next->next->next;
			mid=mid->next;
		}
		new->next= mid->next;
		mid->next= new;

	}
	return *head;
}
