/**
 *  @name        : void DestroyList_DuL(DuLinkedList *L)
 *	@description : destroy a linked list(����˫������)
 *	@param		 : L(the head node)
 *	@return		 : status
 *  @notice      : None
 */

/*
typedef struct DuLNode {
	ElemType data;
  	struct DuLNode *prior,  *next;
} DuLNode, *DuLinkedList;
*/

#include"duLinkedList.h"
#include<stdio.h>
#include<stdlib.h>
 
void DestroyList_DuL(DuLinkedList *L){
	DuLinkedList p,q;
	p = (*L)->next;
	while(p!=NULL){
		q = p->next;
		free(p);
		p = q;
	}
	(*L)->next = NULL;
	printf("\n���ٳɹ���");
}
