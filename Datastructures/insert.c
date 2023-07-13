#ifndef HEADER
#include"header.h"
#endif


STU* insert(STU **head)
{
	int rolNo;
	STU *tmp=*head,*pre;
	STU *new=(STU*)malloc(sizeof(STU));
	printf("enter key no:");
	scanf("%d", &rolNo);
	printf("enter roll Number:\n");
	scanf("%d",&new->rolNo);
	printf("enter Name:\n");
	scanf("%s",new->name);
	if((*head) == NULL)
	{
		printf("list should not be empty\n");
		return *head;
	}
	if((*head)->rolNo == rolNo)
	{
		new->next= *head;
		*head=new;
	}
	else
	{
		while(tmp && (tmp->rolNo!= rolNo))
		{
			pre=tmp;
			tmp=tmp->next;
		}
		new->next = tmp;
		pre->next=new;


	}
	return *head;
}
