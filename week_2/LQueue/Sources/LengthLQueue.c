#include <stdio.h>
#include "LQueue.h"
 
/**
 *  @name        : int LengthLQueue(LQueue *Q)
 *    @description : 确定队列长度
 *    @param         Q 队列指针Q
 *    @return         : Q->length
 *  @notice      : None
 */
int LengthLQueue(LQueue *Q){
	return Q->length;
}

