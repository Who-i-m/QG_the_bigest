#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  @name        : int test_insrtSort(int num)
 *  @description :	测试相同规模的数组在插入排序算法下所用时间 
 *  @param       : 数组大小规模num
 *  @return      : time排序所用时间 
 */
int test_insertSort(int num){
	int arr[num];
	srand(1);//随机播种
	int i;
	for(i = 0;i<num;i++){
		arr[i] = rand()%num;
	}
	double  start1 = clock();
	insertSort(arr,num);
	double stop1 = clock();
	int time = stop1-start1;
	return time;
}	
	
	
