/**
 *  @name        : Status InsertAfterList_DuL(DuLNode *p, DuLNode *q)
 *	@description : insert node q after node p(��p�ڵ�����q�ڵ�)
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

Status InsertAfterList_DuL(DuLNode *p, DuLNode *q){
	while(p->next){
		p = p->next;
	}
	p->next = q;
	p->prior = p;
	q->next = NULL;
	return SUCCESS;
}
