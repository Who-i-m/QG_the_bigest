#include <stdio.h>
#include <stdlib.h>
#include "LQueue.h"
#include <string.h>

/**
 *  @name        : Status GetHeadLQueue(LQueue *Q, void *e)
 *    @description : �鿴��ͷԪ��
 *    @param         Q e ����ָ��Q,��������ָ��e
 *    @return         : �ɹ�-TRUE; ʧ��-FALSE
 *  @notice      : �����Ƿ��
 */
Status GetHeadLQueue(LQueue *Q, void *e){
	if(IsEmptyLQueue(Q)){
		printf("����Ϊ�գ��޷���ȡ��ͷԪ�أ�\n");
		return FALSE;
	}
	unsigned int TypeSize;   //��ʱ���壬�����ж���������
	if(datatype[1] == 'i'){    //���� 
		e = Q->front->next->data;
		printf("��ͷԪ�أ�%d",*(int*)e);
		return TRUE;
	} 
	if(datatype[1] == 'f'){	   //������	
		TypeSize = sizeof(float);
		memcpy(e,Q->front->next->data,TypeSize);
		printf("��ͷԪ�أ�%f",*(float*)e);
		return TRUE;
	}
	if(datatype[1] == 'c'){    //�ַ��� 
		TypeSize = 10*sizeof(char);
		memcpy(e,Q->front->next->data,TypeSize);
		printf("��ͷԪ�أ�%s",e);
		return TRUE;
	}
	//����ֻ���������ֳ��õ��������� 
}

