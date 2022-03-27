#include <stdio.h>
#include <stdlib.h>
#include "LQueue.h"

/**
 *  @name        : void InitLQueue(LQueue *Q)
 *    @description : 初始化队列
 *    @param         Q 队列指针Q
 *  @notice      : None
 */
void InitLQueue(LQueue *Q){
	Node*head = (Node*)malloc(sizeof(Node));
	if(head==NULL){
		printf("队列初始化失败！\n");
		return;
	}
	Q->front = Q->rear = head; //初始化 头尾指针相同，均指向 head 指针指向的节点 
	Q->front->next = NULL; //空队列 
	Q->length = 0; //队长为 0 
	printf("初始化成功！\n"); 
	return; 
}
