#define HEADER
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

typedef struct student{
	int rolNo;
	char name[100];
	struct student *next;
}STU;

STU *add(STU**);
void print(STU*);
STU *addatend(STU**);
void sort(STU**);
void delete(STU**);
STU *insertmiddle(STU**);
STU *insert(STU**);
void printrev(STU*);
STU *reverse(STU**);
