/**
 *  @name        : Status DeleteList(LNode *p, ElemType *e)
 *	@description : delete the first node after the node p and assign its value to e（删除节点p之后的第一个节点，并将其地址值分配给e） 
 *	@param		 : p, e
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

Status DeleteList(LNode *p, ElemType *e){
	LinkedList q = p->next;
	*e = q->data;
	p->next = q->next; 
	free(q);
	return SUCCESS;
}
