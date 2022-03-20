/**
 *  @name        : void TraverseList(LinkedList L, void (*Visit)(ElemType e))
 *	@description : traverse the linked list and call the funtion visit�����������б����÷��ʺ����� 
 *	@param		 : L(the head node), visit
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

void TraverseList(LinkedList L, void (*Visit)(ElemType e)){
	LinkedList p = L->next; 
	while(p){
		Visit((p->data));
		p = p->next;
	}
	printf("\n");
}
