/**
 *  @name        : void DestroyList(LinkedList *L)
 *	@description : destroy a linked list, free all the nodes（销毁一个链表，释放所有节点） 
 *	@param		 : L(the head node)
 *	@return		 : None
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

void DestroyList(LinkedList *L){
	LinkedList p,q;
	p = (*L);
	while(p){
		p = p->next;
		free(L);
		L = p;
	}
	printf("成功销毁链表！\n"); 
}

