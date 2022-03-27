#include <stdio.h>
#include "LQueue.h"
#include <stdlib.h>

/**
 *  @name        : Status TraverseLQueue(const LQueue *Q, void (*foo)(void *q,int location))
 *    @description : 遍历函数操作
 *    @param         Q 队列指针Q，操作函数指针foo
 *    @return         : None
 *  @notice      : None
 */
Status TraverseLQueue(const LQueue *Q, void (*foo)(void *q,int location)){
	int location = 1;   //location用于记录全局变量datatype数组的索引 
	Node*p;
	if(IsEmptyLQueue(Q)){
		return FALSE;		//对队列判空 
	}
	printf("队列数据如下：\n");
	for(p = Q->front->next;p;p = p->next){
		foo(p->data,location);
		location++;				//遍历队列输出 
	}
	printf("\n");
	return TRUE;
}
