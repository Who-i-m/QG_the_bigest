#include <stdio.h>
#include "LQueue.h"
 
/**
 *  @name        : Status IsEmptyLQueue(const LQueue *Q)
 *    @description : �������Ƿ�Ϊ��
 *    @param         Q ����ָ��Q
 *    @return         : ��-TRUE; δ��-FALSE
 *  @notice      : None
 */
Status IsEmptyLQueue(const LQueue *Q){
	if(Q->front == Q->rear){    //ͷβָ����ͬ˵������Ϊ�� 
		return TRUE; 
	}
	return FALSE;
}

