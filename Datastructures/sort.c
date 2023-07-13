#ifndef HEADER
#include"header.h"
#endif

/*sorting using bubble sort*/

STU *swap(STU *ptr1, STU *ptr2)
{
	STU *temp = ptr2->next;
	ptr2->next = ptr1;
	ptr1->next = temp;
	return ptr2;
}

void sort(STU **head)
{
	int cnt=0;
	int swapped=0;
	STU *temp = *head;
	STU **tmp;
	STU *p1,*p2;
	while(temp)
	{
		temp=temp->next;
		cnt++;
	}
	printf("total number of elements in list:%d\n",cnt);
	for(int i=0;i<=cnt; i++)
	{
		tmp=head;
		swapped =0;
		for(int j=0;j<cnt-i-1;j++)
		{
			printf("saikiran\n");
			p1= *tmp;
			p2= p1->next;
#if 1	//		sleep(10);/*
			if(p1->rolNo  > p2->rolNo)
			{
				printf("hello this is swap\n");
				*tmp = swap(p1,p2);
				swapped=1; 
			}
			tmp=&(*tmp)->next;
#endif		
		}
		if(swapped ==0) //every iteration of the it will check wheather all the elemments are sorted.
			break;

	}
	print(*head);
//	return *head;
}
	
