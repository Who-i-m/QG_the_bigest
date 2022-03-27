#include <stdio.h>
#include <stdlib.h>
#include "LQueue.h"

/**
 *  @name        : void ClearLQueue(AQueue *Q)
 *    @description : ��ն���
 *    @param         Q ����ָ��Q
 *  @notice      : None
 */
void ClearLQueue(LQueue *Q){
	Node*p;//��ʱ����ָ�룬���ڱ�������
	for(p = Q->front->next;p;p = p->next){
		free(p);
		Q->length--;//�ͷŽڵ㣬ͬʱָ����ƣ� length-- 
	} 
	Q->rear = Q->front; //ͷβָ����ͬ��ʾ��������� 
}
