#include <stdio.h>
#include "LinkStack.h" 

/**
 *  @name        : Status isEmptyLStack(LinkStack *s)
 *	@description : ÅÐ¶ÏÕ»ÊÇ·ñÎª¿Õ
 *	@param		 : s(Õ»µ×)
 *	@return		 : Status
 *  @notice      : None
 */
Status isEmptyLStack(LinkStack *s){
	if(s->count == 0){
		printf("Õ»Îª¿ÕÕ»£¡\n");
		return SUCCESS;
	} 
	printf("Õ»²»Îª¿ÕÕ»£¡\n"); 
	return ERROR;
}
