#ifndef HEADER
#include"header.h"
#endif

STU *add(STU **head)
{
  STU *new = NULL;
  new = (STU*)malloc(sizeof(STU));
  printf("please enter Roll number:");
  scanf("%d",&new->rolNo);
  printf("please enter Name:");
  scanf("%s",new->name);
  if(*head == NULL)
  {
	*head = new;
  	new->next= NULL;
  }
  else
  {
	  new->next = *head;
	  *head= new;
  }
  return *head;


}
