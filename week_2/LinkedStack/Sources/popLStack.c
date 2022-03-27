#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h"

/**
 *  @name        : Status popLStack(LinkStack *s,ElemType *data)
 *	@description : ��ջ
 *	@param		 : s(ջ��)��data����ջ���ݣ� 
 *	@return		 : Status
 *  @notice      : None
 */
Status popLStack(LinkStack *s,ElemType *data){
	LinkStackPtr p;//��ʱָ�� 
	if(!(s->count)){
		printf("ջΪ��ջ��\n");
		return ERROR;
	}
	*data = s->top->data;
	printf("��ջ���ݣ�%d\n",*data);	
	p = s->top;
	s->top = s->top->next;
	free(p);
	s->count--; //ջ��-1 
	return SUCCESS;
}
