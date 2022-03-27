#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h"

/**
 *  @name        : Status clearLStack(LinkStack *s)
 *	@description : 清空栈
 *	@param		 : s(栈底)
 *	@return		 : Status
 *  @notice      : None
 */
Status clearLStack(LinkStack *s){
	LinkStackPtr p,q;
	p = s->top;
	while(p){
		q = p;
		p = p->next;
		q->data = NULL; //遍历栈修改每个节点的 data 为 NULL 
	} 
	return SUCCESS;	
}
