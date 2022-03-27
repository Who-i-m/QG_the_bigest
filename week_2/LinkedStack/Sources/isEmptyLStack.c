#include <stdio.h>
#include "LinkStack.h" 

/**
 *  @name        : Status isEmptyLStack(LinkStack *s)
 *	@description : �ж�ջ�Ƿ�Ϊ��
 *	@param		 : s(ջ��)
 *	@return		 : Status
 *  @notice      : None
 */
Status isEmptyLStack(LinkStack *s){
	if(s->count == 0){
		printf("ջΪ��ջ��\n");
		return SUCCESS;
	} 
	printf("ջ��Ϊ��ջ��\n"); 
	return ERROR;
}
