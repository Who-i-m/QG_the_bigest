#include<stdio.h>

/**
 *  @name        : ����
 *  @description : ��һ�������������ҵ���K��/С����
 *  @param       : ����ָ��a�����鳤��size
 */
int Find_K(int *a, int size, int k){
	int begin = 0;
	int end = size-1;
	return To_K(a, begin, end, (size - k) + 1); // ��K��, ����Ϊ��С������, ��(size-k)+1��
}//�ݹ鷨��� 
