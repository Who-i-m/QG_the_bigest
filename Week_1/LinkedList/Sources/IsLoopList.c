/**
 *  @name        : Status IsLoopList(LinkedList L)
 *	@description : judge whether the linked list is looped（判断是否属于循环链表） 
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */

#include"linkedlist.h"
#include<stdlib.h>
#include<stdio.h>
 
Status IsLoopList(LinkedList L){
	LinkedList p,q;
	p = L;
	q = L;
	while(q&&q->next){
		q = q->next->next;
		p = p->next;
		if(p==q){
			free(p);
			free(q);
			printf("是循环链表\n");
		}
	}
	if((!q)||!(q->next)){
		free(p);
		free(q);
		printf("不是循环链表\n");
	} 
	return SUCCESS;
}
