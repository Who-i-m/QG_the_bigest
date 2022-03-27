#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h"

/**
 *  @name        : Status destroyLStack(LinkStack *s)
 *	@description : ����ջ
 *	@param		 : s(ջ��)
 *	@return		 : Status
 *  @notice      : None
 */
Status destroyLStack(LinkStack *s){
	LinkStackPtr p,q;
	p = s->top;
	while(p){
		q = p;
		p = p->next;
		free(q); //����ջ,ʹ�ڵ���Ƶ�ͬʱ�ͷ�ǰһ���ڵ���ڴ�ռ� 
	} 
	s->count = 0; //�޸�ջ��Ϊ 0  
	return SUCCESS;	
}
