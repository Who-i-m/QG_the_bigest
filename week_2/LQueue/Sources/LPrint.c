#include <stdio.h>
#include "LQueue.h"
#include <stdlib.h>

/**
 *  @name        : void LPrint(void *q,int location)
 *    @description : ��������
 *    @param         q
 *   @return      :NULL
 *  @notice      : None
 */
void LPrint(void *q,int location){
	if(datatype[location] == 'i'){
		printf("%d\t",*(int*)q);
	}
	if(datatype[location] == 'c'){
		printf("%s\t",*(char*)q);                        //location���ڼ�¼ȫ�ֱ���datatype��������� 
	}
	if(datatype[location] == 'f'){
		printf("%f\t",*(float*)q);
	}
}
