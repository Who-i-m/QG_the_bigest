/**
 *  @name        : Status DeleteList_DuL(DuLNode *p, ElemType *e)
 *	@description : delete the first node after the node p and assign its value to e（删除节点p之后的第一个节点，并将其值分配给e） 
 *	@param		 : p, e
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
 
Status DeleteList_DuL(DuLNode *p, ElemType *e){
	DuLinkedList q;
	q = p->next;
	*e = q->data;
	p->next = q->next;
	q->next->prior = p; 
	free(q);
	return SUCCESS;
}

