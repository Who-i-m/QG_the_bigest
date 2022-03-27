#include <stdio.h>
#include <stdlib.h>
#include "LQueue.h" 
/**
 *  @name        : Status DeLQueue(LQueue *Q)
 *    @description : ���Ӳ���
 *    @param         Q ����ָ��Q
 *    @return         : �ɹ�-TRUE; ʧ��-FALSE
 *  @notice      : None
 */
Status DeLQueue(LQueue *Q){
	Node*p;
	if(IsEmptyLQueue(Q)){
		printf("Ϊ�ն��У�\n");
		return FALSE;
	}
	if(datatype[1] == 'i'){
		int a;
		GetHeadLQueue(Q,&a);	//���ͷ�ڵ�data
	}	
	if(datatype[1] == 'c'){
		char b[10]; 
		GetHeadLQueue(Q,b);	//���ͷ�ڵ�data
	}
	if(datatype[1] == 'f'){
		float c;
		GetHeadLQueue(Q,&c);	//���ͷ�ڵ�data 
	}		
	p = Q->front->next;
	Q->front->next = p->next; //ͷָ����� 
	if(Q->rear == p){      //�ն�����Ҫ�ָ�ͷβָ����ͬ 
		Q->rear = Q->front;
	}
	free(p);		//�ͷ�ͷ�ڵ� 
	Q->length--;	//����-1 
	printf("\n");
	return TRUE;
}
