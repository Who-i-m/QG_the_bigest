/**
 *  @name        : Status InitList_DuL(DuLinkedList *L)
 *	@description : initialize an empty linked list with only the head node(��ʼ��һ��ֻ��ͷ���ڵ�Ŀ�����)
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
		printf("˫�����ʼ����������ERROR\n");
		return ERROR;
	} 
	(*L)->prior = NULL;
	(*L)->next = NULL;
	printf("˫�����ʼ����������SUCCESS\n");
	return SUCCESS; 
}
