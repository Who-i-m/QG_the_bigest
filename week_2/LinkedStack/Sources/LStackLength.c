#include <stdio.h>
#include "LinkStack.h" 

/**
 *  @name        : Status LStackLength(LinkStack *s,int *length)
 *	@description : ���ջ����
 *	@param		 : s(ջ��)��length��ջ�ĳ��ȣ� 
 *	@return		 : Status
 *  @notice      : None
 */
Status LStackLength(LinkStack *s,int *length){
	*length = s->count;
	return SUCCESS;
}
