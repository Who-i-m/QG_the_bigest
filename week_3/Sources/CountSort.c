#include<stdio.h>
#include<stdlib.h> 

/**
 *  @name        : void CountSort(int *a, int size , int max)
 *  @description : ��������
 *  @param       : ����ָ��a�����鳤��size���������ֵmax
 */
void CountSort(int *a, int size , int max){
	int min  = a[0];
	int i;
	for(i = 0;i<size;i++){
		if(a[i]<min){
			min = a[i];
		}
	} //�ҵ������е���Сֵ 
	int range = max-min;//ȷ����ֵ��Χ 
	int count[range];
//	(int*)count = (int*)malloc(range*sizeof(int));//������ʱ�������ڼ��������a������ÿ�������ֵĴ��� 
	int j,k;
	for(j = 0;j<size;j++){
		count[a[i]-min]++;// ͳ��a������ÿ�������ֵĴ���
	}
	j = 0;
	for(k = 0;k<range;k++){
		while(count[k]--){
			a[j] = k+min;
			j++;//���������������� 
		}
	}
	free(count);//�ͷ���ʱ���� 

}
