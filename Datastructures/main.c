#ifndef HEADER
#include "header.h"
#endif


void main()
{
	STU *head =NULL;
	char choice;
	while(1)
	{
		printf("\n\n********************MENU*******************\n\n");
		printf("a:add an element at begining\n");
		printf("e:add an element at end\n");
		printf("s:sort in ascending order\n");
		printf("d:delete an enlement\n");
		printf("p:print the list\n");
		printf("r:revese print the list\n");
		printf("R:reverse the list\n");
		printf("i:insert between two nodes\n");
		printf("I:insert middle of the list\n");
		printf("E:exit\n");
		printf("********************************************\n\n");
		printf("Enter your choice:");
		scanf("%c",&choice);
		switch(choice)
		{
			case 'a': //printf("add at begining\n");
				  head=add(&head);
			break;
			case 'e': //printf("add at end\n");
				  head=addatend(&head);
			break;
			case 's':// printf("sort in ascending order\n");
				  sort(&head);
			break;
			case 'd': //printf("delete an element\n");
				  delete(&head);
			break;
			case 'p': //printf("print the list\n");
				  print(head);
			break;
			case 'r': printf("print list in reverse\n");
				  head= reverse(&head);
			break;
			case 'R': //printf("Reverse the list\n");
				  printrev(head);				  
			break;
			case 'i': //printf("insert before given node\n");
				  head=insert(&head);
			break;
			case 'I'://printf("inset middle of the list\n");
				 head=insertmiddle(&head); 
			break;
			case 'E': exit(0);
			default:
				printf("enter valid input Thank You\n");
		}
				  getchar();
	}

}
