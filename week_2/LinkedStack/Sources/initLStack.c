#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h"

/**
 *  @name        : Status initLStack(LinkStack *s)
 *	@description : 初始化栈
 *	@param		 : s(栈底)
 *	@return		 : Status
 *  @notice      : None
 */
Status initLStack(LinkStack *s){
	s->top = (LinkStackPtr)malloc(sizeof(StackNode));
	if(!(s->top))
		return ERROR;  //判断栈顶空间是否申请成功 
	s->top = NULL;	   //初始化栈顶为空 
	s->count = 0;      //栈数计算为 0  
	return SUCCESS; 
}
