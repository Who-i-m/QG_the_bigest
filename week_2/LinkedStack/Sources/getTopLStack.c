#include <stdio.h>
#include "LinkStack.h" 

/**
 *  @name        : Status getTopLStack(LinkStack *s,ElemType *e)
 *	@description : 得到栈顶
 *	@param		 : s(栈底),e(栈顶数据） 
 *	@return		 : Status
 *  @notice      : None
 */
Status getTopLStack(LinkStack *s,ElemType *e){
	LinkStackPtr p = s->top;  //构造指针等于栈顶指针，从而实现对栈顶元素的访问 
	*e = p->data;
	return SUCCESS; 
}
