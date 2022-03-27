#include <stdio.h>
#include <stdlib.h>
#include "LQueue.h" 
/**
 *  @name        : Status DeLQueue(LQueue *Q)
 *    @description : 出队操作
 *    @param         Q 队列指针Q
 *    @return         : 成功-TRUE; 失败-FALSE
 *  @notice      : None
 */
Status DeLQueue(LQueue *Q){
	Node*p;
	if(IsEmptyLQueue(Q)){
		printf("为空队列！\n");
		return FALSE;
	}
	if(datatype[1] == 'i'){
		int a;
		GetHeadLQueue(Q,&a);	//输出头节点data
	}	
	if(datatype[1] == 'c'){
		char b[10]; 
		GetHeadLQueue(Q,b);	//输出头节点data
	}
	if(datatype[1] == 'f'){
		float c;
		GetHeadLQueue(Q,&c);	//输出头节点data 
	}		
	p = Q->front->next;
	Q->front->next = p->next; //头指针后移 
	if(Q->rear == p){      //空队列需要恢复头尾指针相同 
		Q->rear = Q->front;
	}
	free(p);		//释放头节点 
	Q->length--;	//队数-1 
	printf("\n");
	return TRUE;
}
