#include <stdio.h>
#include <stdlib.h>
#include "LQueue.h"

/**
 *  @name        : void DestoryLQueue(LQueue *Q)
 *    @description : ���ٶ���
 *    @param         Q ����ָ��Q
 *  @notice      : None
 */
void DestoryLQueue(LQueue *Q){
	Node*p;
	for(p = Q->front;p;p = Q->front){
		Q->front = Q->front->next;//�ڵ���Ʋ��ͷ�ͷ�ڵ� 
		free(p);
	} 
}
