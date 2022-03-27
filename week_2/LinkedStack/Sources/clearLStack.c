#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h"

/**
 *  @name        : Status clearLStack(LinkStack *s)
 *	@description : ���ջ
 *	@param		 : s(ջ��)
 *	@return		 : Status
 *  @notice      : None
 */
Status clearLStack(LinkStack *s){
	LinkStackPtr p,q;
	p = s->top;
	while(p){
		q = p;
		p = p->next;
		q->data = NULL; //����ջ�޸�ÿ���ڵ�� data Ϊ NULL 
	} 
	return SUCCESS;	
}
