#include <stdio.h>
#include "LinkStack.h" 

/**
 *  @name        : Status getTopLStack(LinkStack *s,ElemType *e)
 *	@description : �õ�ջ��
 *	@param		 : s(ջ��),e(ջ�����ݣ� 
 *	@return		 : Status
 *  @notice      : None
 */
Status getTopLStack(LinkStack *s,ElemType *e){
	LinkStackPtr p = s->top;  //����ָ�����ջ��ָ�룬�Ӷ�ʵ�ֶ�ջ��Ԫ�صķ��� 
	*e = p->data;
	return SUCCESS; 
}
