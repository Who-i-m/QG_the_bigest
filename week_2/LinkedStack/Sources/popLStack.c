#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h"

/**
 *  @name        : Status popLStack(LinkStack *s,ElemType *data)
 *	@description : 出栈
 *	@param		 : s(栈底)，data（出栈数据） 
 *	@return		 : Status
 *  @notice      : None
 */
Status popLStack(LinkStack *s,ElemType *data){
	LinkStackPtr p;//临时指针 
	if(!(s->count)){
		printf("栈为空栈！\n");
		return ERROR;
	}
	*data = s->top->data;
	printf("出栈数据：%d\n",*data);	
	p = s->top;
	s->top = s->top->next;
	free(p);
	s->count--; //栈数-1 
	return SUCCESS;
}
