/**
 *  @name        : LNode* FindMidNode(LinkedList *L)
 *	@description : find the middle node in the linked list（找到链表的中点） 
 *	@param		 : L(the head node)
 *	@return		 : LNode
 *  @notice      : choose to finish
 */
 
#include"linkedlist.h"
#include<stdlib.h>
#include<stdio.h>

LNode* FindMidNode(LinkedList *L){
	LinkedList q = *L;
	LinkedList p = *L;
	while(p&&p->next){
		q = q->next;
		p = p->next->next;
	}
	return q;
}
