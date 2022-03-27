#include <stdio.h>
#include <stdlib.h>
#include "LQueue.h"
#include <string.h>

/**
 *  @name        : Status GetHeadLQueue(LQueue *Q, void *e)
 *    @description : 查看队头元素
 *    @param         Q e 队列指针Q,返回数据指针e
 *    @return         : 成功-TRUE; 失败-FALSE
 *  @notice      : 队列是否空
 */
Status GetHeadLQueue(LQueue *Q, void *e){
	if(IsEmptyLQueue(Q)){
		printf("队列为空！无法获取队头元素！\n");
		return FALSE;
	}
	unsigned int TypeSize;   //临时定义，用于判断数据类型
	if(datatype[1] == 'i'){    //整型 
		e = Q->front->next->data;
		printf("队头元素：%d",*(int*)e);
		return TRUE;
	} 
	if(datatype[1] == 'f'){	   //浮点型	
		TypeSize = sizeof(float);
		memcpy(e,Q->front->next->data,TypeSize);
		printf("队头元素：%f",*(float*)e);
		return TRUE;
	}
	if(datatype[1] == 'c'){    //字符型 
		TypeSize = 10*sizeof(char);
		memcpy(e,Q->front->next->data,TypeSize);
		printf("队头元素：%s",e);
		return TRUE;
	}
	//这里只考虑了三种常用的数据类型 
}

