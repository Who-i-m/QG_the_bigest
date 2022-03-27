#include <stdio.h>
#include "LQueue.h"
#include <stdlib.h>

/**
 *  @name        : Status TraverseLQueue(const LQueue *Q, void (*foo)(void *q,int location))
 *    @description : ������������
 *    @param         Q ����ָ��Q����������ָ��foo
 *    @return         : None
 *  @notice      : None
 */
Status TraverseLQueue(const LQueue *Q, void (*foo)(void *q,int location)){
	int location = 1;   //location���ڼ�¼ȫ�ֱ���datatype��������� 
	Node*p;
	if(IsEmptyLQueue(Q)){
		return FALSE;		//�Զ����п� 
	}
	printf("�����������£�\n");
	for(p = Q->front->next;p;p = p->next){
		foo(p->data,location);
		location++;				//����������� 
	}
	printf("\n");
	return TRUE;
}
