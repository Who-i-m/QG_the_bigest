#include <stdio.h>
#include <stdlib.h>
#include "LQueue.h"

/**
 *  @name        : Status EnLQueue(LQueue *Q, void *data)
 *    @description : ��Ӳ���
 *    @param         Q ����ָ��Q,�������ָ��data
 *    @return         : �ɹ�-TRUE; ʧ��-FALSE
 *  @notice      : �����Ƿ�Ϊ��
 */
Status EnLQueue(LQueue *Q, void *data){
	Node*p = (Node*)malloc(sizeof(Node));
	if(!p){
		return FALSE;
	}
	int tag = Q->length;
	tag+=1;
	if(datatype[tag] == 'i')
		p->data = (int*)data;
	if(datatype[tag] == 'c')
		p->data = (char**)data;
	if(datatype[tag] == 'f')
		p->data = (float*)data;
	p->next = NULL;
	Q->rear->next = p;//�ڵ�ӵ���β��βָ����� 
	Q->rear = p;
	Q->length++;//����+1 
}

