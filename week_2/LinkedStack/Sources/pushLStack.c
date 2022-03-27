#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h"

/**
 *  @name        : Status pushLStack(LinkStack *s,ElemType data)
 *	@description : 入栈
 *	@param		 : s(栈底)，data（入栈数据） 
 *	@return		 : Status
 *  @notice      : None
 */
Status pushLStack(LinkStack *s,ElemType data){
	LinkStackPtr p = (LinkStackPtr)malloc(sizeof(StackNode)); //申请新节点用于存储 data 
	p->data = data;
	p->next = s->top;
	s->top = p;//让栈顶指针接在最上方 
	s->count++;//栈数+1 
	return SUCCESS;
}
