#include <stdio.h>
#include "LinkStack.h" 

/**
 *  @name        : Status LStackLength(LinkStack *s,int *length)
 *	@description : 检测栈长度
 *	@param		 : s(栈底)，length（栈的长度） 
 *	@return		 : Status
 *  @notice      : None
 */
Status LStackLength(LinkStack *s,int *length){
	*length = s->count;
	return SUCCESS;
}
