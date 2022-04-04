#include<stdio.h>
 
/**
 *  @name        : void QuickSort(int *a, int begin, int end);
 *  @description : 快速排序（递归版）
 *  @param       : 数组指针a，数组起点begin，数组终点end
 */
void QuickSort_Recursion(int *a, int begin, int end){
	if(begin<end){
		int i = Partition(a, begin, end); // 把枢纽排好
		QuickSort_Recursion(a,begin,i-1);
		QuickSort_Recursion(a,i+1,end);
	}
}
