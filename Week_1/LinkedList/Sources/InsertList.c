/**
 *  @name        : Status InsertList(LNode *p, LNode *q)
 *	@description : insert node q after node p£¨²åÈë½Úµã£© 
 *	@param		 : p, q
 *	@return		 : Status
 *  @notice      : None
 */
 
#include"linkedlist.h"
#include<stdlib.h>
#include<stdio.h>

 /*
 typedef struct LNode {
	ElemType data;
  	struct LNode *next;
} LNode, *LinkedList;
*/

Status InsertList(LNode *p, LNode *q){
	while(p->next){
		p = p->next;
	}
	q->next = p->next;
	p->next = q; 
	return SUCCESS;
}
