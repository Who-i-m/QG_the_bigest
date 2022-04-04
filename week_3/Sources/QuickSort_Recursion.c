#include<stdio.h>
 
/**
 *  @name        : void QuickSort(int *a, int begin, int end);
 *  @description : �������򣨵ݹ�棩
 *  @param       : ����ָ��a���������begin�������յ�end
 */
void QuickSort_Recursion(int *a, int begin, int end){
	if(begin<end){
		int i = Partition(a, begin, end); // ����Ŧ�ź�
		QuickSort_Recursion(a,begin,i-1);
		QuickSort_Recursion(a,i+1,end);
	}
}
