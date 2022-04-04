#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  @name        : int test_QuickSort(int num)
 *  @description :	测试相同规模的数组在快速排序算法下所用时间 
 *  @param       : 数组大小规模num
 *  @return      : time排序所用时间 
 */
int test_QuickSort(int num){
	int arr[num];
	srand(1);//随机播种
	int i;
	for(i = 0;i<num;i++){
		arr[i] = rand()%num;
	}
	double  start1 = clock();
	QuickSort_Recursion(arr,0,num-1);
	double stop1 = clock();
	int time = stop1-start1;
	return time;
}
