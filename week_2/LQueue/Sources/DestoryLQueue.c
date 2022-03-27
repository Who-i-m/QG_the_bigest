#include <stdio.h>
#include <stdlib.h>
#include "LQueue.h"

/**
 *  @name        : void DestoryLQueue(LQueue *Q)
 *    @description : 销毁队列
 *    @param         Q 队列指针Q
 *  @notice      : None
 */
void DestoryLQueue(LQueue *Q){
	Node*p;
	for(p = Q->front;p;p = Q->front){
		Q->front = Q->front->next;//节点后移并释放头节点 
		free(p);
	} 
}
