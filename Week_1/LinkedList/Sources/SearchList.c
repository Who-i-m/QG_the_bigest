/**
 *  @name        : Status SearchList(LinkedList L, ElemType e)
 *	@description : find the first node in the linked list according to e（找到链接列表中的第一个data = e的节点） 
 *	@param		 : L(the head node), e
 *	@return		 : Status
 *  @notice      : None
 */
 
#include"linkedlist.h"
#include<stdlib.h>
#include<stdio.h>

Status SearchList(LinkedList L, ElemType e){
	if(L==NULL||L->next == NULL){
		printf("不存在该元素！");
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
