#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h"

/**
 *  @name        : Status pushLStack(LinkStack *s,ElemType data)
 *	@description : ��ջ
 *	@param		 : s(ջ��)��data����ջ���ݣ� 
 *	@return		 : Status
 *  @notice      : None
 */
Status pushLStack(LinkStack *s,ElemType data){
	LinkStackPtr p = (LinkStackPtr)malloc(sizeof(StackNode)); //�����½ڵ����ڴ洢 data 
	p->data = data;
	p->next = s->top;
	s->top = p;//��ջ��ָ��������Ϸ� 
	s->count++;//ջ��+1 
	return SUCCESS;
}
