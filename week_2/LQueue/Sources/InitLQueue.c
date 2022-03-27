#include <stdio.h>
#include <stdlib.h>
#include "LQueue.h"

/**
 *  @name        : void InitLQueue(LQueue *Q)
 *    @description : ��ʼ������
 *    @param         Q ����ָ��Q
 *  @notice      : None
 */
void InitLQueue(LQueue *Q){
	Node*head = (Node*)malloc(sizeof(Node));
	if(head==NULL){
		printf("���г�ʼ��ʧ�ܣ�\n");
		return;
	}
	Q->front = Q->rear = head; //��ʼ�� ͷβָ����ͬ����ָ�� head ָ��ָ��Ľڵ� 
	Q->front->next = NULL; //�ն��� 
	Q->length = 0; //�ӳ�Ϊ 0 
	printf("��ʼ���ɹ���\n"); 
	return; 
}
