/**
 *  @name        : Status SearchList(LinkedList L, ElemType e)
 *	@description : find the first node in the linked list according to e���ҵ������б��еĵ�һ��data = e�Ľڵ㣩 
 *	@param		 : L(the head node), e
 *	@return		 : Status
 *  @notice      : None
 */
 
#include"linkedlist.h"
#include<stdlib.h>
#include<stdio.h>

Status SearchList(LinkedList L, ElemType e){
	if(L==NULL||L->next == NULL){
		printf("�����ڸ�Ԫ�أ�");
		return ERROR;
	}	
	LinkedList p = L;
	int num = 0;
	while(p){
		if(p->data == e){
			printf("%d\n",num);
			break;
		}
		p = p->next;
		num++;
	}
	return SUCCESS;
}
