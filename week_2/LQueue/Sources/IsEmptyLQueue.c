#include <stdio.h>
#include "LQueue.h"
 
/**
 *  @name        : Status IsEmptyLQueue(const LQueue *Q)
 *    @description : 检查队列是否为空
 *    @param         Q 队列指针Q
 *    @return         : 空-TRUE; 未空-FALSE
 *  @notice      : None
 */
Status IsEmptyLQueue(const LQueue *Q){
	if(Q->front == Q->rear){    //头尾指针相同说明队列为空 
		return TRUE; 
	}
	return FALSE;
}

