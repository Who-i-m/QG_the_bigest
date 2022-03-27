#include <stdio.h>
#include <stdlib.h>
#include "LQueue.h"

/**
 *  @name        : Status EnLQueue(LQueue *Q, void *data)
 *    @description : 入队操作
 *    @param         Q 队列指针Q,入队数据指针data
 *    @return         : 成功-TRUE; 失败-FALSE
 *  @notice      : 队列是否为空
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
	Q->rear->next = p;//节点接到队尾，尾指针后移 
	Q->rear = p;
	Q->length++;//队数+1 
}

