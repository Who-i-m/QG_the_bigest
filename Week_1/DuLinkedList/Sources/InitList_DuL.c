/**
 *  @name        : Status InitList_DuL(DuLinkedList *L)
 *	@description : initialize an empty linked list with only the head node(初始化一个只有头部节点的空链表)
 *	@param		 : L(the head node)
 *	@return		 : Status
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
 
Status InitList_DuL(DuLinkedList *L){
	(*L) = (DuLinkedList)malloc(sizeof(DuLNode));
	if(!(*L)){
		printf("双链表初始化完成情况：ERROR\n");
		return ERROR;
	} 
	(*L)->prior = NULL;
	(*L)->next = NULL;
	printf("双链表初始化完成情况：SUCCESS\n");
	return SUCCESS; 
}
