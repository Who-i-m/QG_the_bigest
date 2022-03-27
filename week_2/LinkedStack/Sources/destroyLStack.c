#include <stdio.h>
#include <stdlib.h>
#include "LinkStack.h"

/**
 *  @name        : Status destroyLStack(LinkStack *s)
 *	@description : 销毁栈
 *	@param		 : s(栈底)
 *	@return		 : Status
 *  @notice      : None
 */
Status destroyLStack(LinkStack *s){
	LinkStackPtr p,q;
	p = s->top;
	while(p){
		q = p;
		p = p->next;
		free(q); //遍历栈,使节点后移的同时释放前一个节点的内存空间 
	} 
	s->count = 0; //修改栈数为 0  
	return SUCCESS;	
}
