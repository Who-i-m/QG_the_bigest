#include<stdio.h>

/**
 *  @name        : void MergeSort(int *a,int begin,int end,int *temp);
 *  @description : 归并排序
 *  @param       : 数组指针a，数组起点begin，数组终点end，承载数组指针temp
 */
void MergeSort(int *a,int begin,int end,int *temp){
	int mid;
	mid = (begin+end)/2;
	if(begin<end){
		MergeSort(a,begin,mid,temp);	//对左边数组递归二分 
		MergeSort(a,mid+1,end,temp);	//对右边数组递归二分 
		MergeArray(a,begin,mid,end,temp); //对最小单位进行排序合并 
	}
}
