#include <stdio.h>
#include "LQueue.h"
#include <stdlib.h>

/**
 *  @name        : void LPrint(void *q,int location)
 *    @description : 操作函数
 *    @param         q
 *   @return      :NULL
 *  @notice      : None
 */
void LPrint(void *q,int location){
	if(datatype[location] == 'i'){
		printf("%d\t",*(int*)q);
	}
	if(datatype[location] == 'c'){
		printf("%s\t",*(char*)q);                        //location用于记录全局变量datatype数组的索引 
	}
	if(datatype[location] == 'f'){
		printf("%f\t",*(float*)q);
	}
}
