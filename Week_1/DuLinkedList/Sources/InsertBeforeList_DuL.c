/**
 *  @name        : Status InsertBeforeList_DuL(DuLNode *p, LNode *q)
 *	@description : insert node q before node p(在p节点前面插入q节点)
 *	@param		 : p, q
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

Status InsertBeforeList_DuL(DuLNode *p, DuLNode *q){
	q->prior = p->prior;
	q->prior->next = q;
	q->next = p;
	p->prior = q;
	return SUCCESS;
}
