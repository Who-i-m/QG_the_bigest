#include<stdio.h>

/**
 *  @name        : void MergeSort(int *a,int begin,int end,int *temp);
 *  @description : �鲢����
 *  @param       : ����ָ��a���������begin�������յ�end����������ָ��temp
 */
void MergeSort(int *a,int begin,int end,int *temp){
	int mid;
	mid = (begin+end)/2;
	if(begin<end){
		MergeSort(a,begin,mid,temp);	//���������ݹ���� 
		MergeSort(a,mid+1,end,temp);	//���ұ�����ݹ���� 
		MergeArray(a,begin,mid,end,temp); //����С��λ��������ϲ� 
	}
}
