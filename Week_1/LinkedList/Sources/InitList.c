/**
 *  @name        : Status InitList(LinkList *L);
 *	@description : initialize an empty linked list with only the head node without value����ʼ��һ���յ�����ֻ��ͷ���ڵ�û��ֵ���� 
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
	printf("�ɹ���ʼ����\n");
	return SUCCESS;
}
