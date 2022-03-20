/**
 *  @name        : Status DeleteList_DuL(DuLNode *p, ElemType *e)
 *	@description : delete the first node after the node p and assign its value to e��ɾ���ڵ�p֮��ĵ�һ���ڵ㣬������ֵ�����e�� 
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

