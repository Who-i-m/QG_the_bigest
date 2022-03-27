#include <stdio.h>
#include <stdlib.h>
#include "LQueue.h"

/**
 *  @name        : void ClearLQueue(AQueue *Q)
 *    @description : 清空队列
 *    @param         Q 队列指针Q
 *  @notice      : None
 */
void ClearLQueue(LQueue *Q){
	Node*p;//临时定义指针，用于遍历队列
	for(p = Q->front->next;p;p = p->next){
		free(p);
		Q->length--;//释放节点，同时指针后移， length-- 
	} 
	Q->rear = Q->front; //头尾指针相同表示队列已清空 
}
