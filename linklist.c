#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct listnode
{
	int data;
	struct listnode *next;
} 

typedef struct listnode List;

List *genlinklist(List *nextone, int number)
{
	List *node = (List *)malloc(sizeof(List));
	assert(node!=NULL);
	node->data=number;
	node->next=nextone;
	return node;
}