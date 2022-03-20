/**
 *  @name        : Status ReverseList(LinkedList *L)
 *	@description : reverse the linked list£¨·´×ªÁ´±í£© 
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
 
#include"linkedlist.h"
#include<stdlib.h>
#include<stdio.h>

Status ReverseList(LinkedList *L){
	LinkedList p,q,r;
	p = (*L)->next;
	q = NULL;
	(*L)->next = NULL;
	while(p){
		r = p->next;
		p->next = q;
		q = p;
		p = r; 
	}
	(*L)->next = q;
	return SUCCESS;
}
