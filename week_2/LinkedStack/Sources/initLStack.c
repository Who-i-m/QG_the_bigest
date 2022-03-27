#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h"

/**
 *  @name        : Status initLStack(LinkStack *s)
 *	@description : ��ʼ��ջ
 *	@param		 : s(ջ��)
 *	@return		 : Status
 *  @notice      : None
 */
Status initLStack(LinkStack *s){
	s->top = (LinkStackPtr)malloc(sizeof(StackNode));
	if(!(s->top))
		return ERROR;  //�ж�ջ���ռ��Ƿ�����ɹ� 
	s->top = NULL;	   //��ʼ��ջ��Ϊ�� 
	s->count = 0;      //ջ������Ϊ 0  
	return SUCCESS; 
}
