#include<stdio.h>
#include<stdlib.h> 

/**
 *  @name        : void CountSort(int *a, int size , int max)
 *  @description : 计数排序
 *  @param       : 数组指针a，数组长度size，数组最大值max
 */
void CountSort(int *a, int size , int max){
	int min  = a[0];
	int i;
	for(i = 0;i<size;i++){
		if(a[i]<min){
			min = a[i];
		}
	} //找到数组中的最小值 
	int range = max-min;//确定数值范围 
	int count[range];
//	(int*)count = (int*)malloc(range*sizeof(int));//申请临时数组用于计数，存放a数组中每个数出现的次数 
	int j,k;
	for(j = 0;j<size;j++){
		count[a[i]-min]++;// 统计a数组中每个数出现的次数
	}
	j = 0;
	for(k = 0;k<range;k++){
		while(count[k]--){
			a[j] = k+min;
			j++;//调整数组数字排序 
		}
	}
	free(count);//释放临时数组 

}
