/**
 *  @name        : Status IsLoopList(LinkedList L)
 *	@description : judge whether the linked list is looped���ж��Ƿ�����ѭ������ 
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
			printf("��ѭ������\n");
		}
	}
	if((!q)||!(q->next)){
		free(p);
		free(q);
		printf("����ѭ������\n");
	} 
	return SUCCESS;
}
