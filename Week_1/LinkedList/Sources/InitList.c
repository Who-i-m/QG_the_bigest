/**
 *  @name        : Status InitList(LinkList *L);
 *	@description : initialize an empty linked list with only the head node without value（初始化一个空的链表，只有头部节点没有值。） 
 *	@param		 : L(the head node)
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

Status InitList(LinkedList *L){
	(*L) = (LinkedList)malloc(sizeof(LNode)); 
	if(!(*L))
		return ERROR;
	(*L)->next = NULL;
	printf("成功初始化！\n");
	return SUCCESS;
}
