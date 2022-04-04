#include "sort.h"
#include <stdio.h>

/**
 *  @name        : void test2()
 *  @description :	测试小规模的数组在不同排序算法多次排序下所用平均时间 
 *  @param       :  
 *  @notice      : 这里将小规模定义为100的层次 
 */
void test2(){
	int num1;
	int time1,time2,time3,time4;
	time1 = 0;time2 = 0;time3 = 0;time4 = 0;
	printf("以下是在相同层次数据集的不同排序算法的平均时间测试:\n");
	printf("-------------------No.4--------------------\n");
	printf("数据集层次：100\n");
	printf("数据集排序次数：100k\n"); 
	num1 = 100;
	int count = 1;
	for(count;count<=100000;count++){
		time1 += test_insertSort(num1);
		time2 += test_MergeSort(num1);
		time3 += test_QuickSort(num1);
		time4 += test_RadixCountSort(num1); 
	}
	printf("the time of insertSort is %dms\n",time1);
	printf("the time of MergeSort is %dms\n",time2);
	printf("the time of QuickSort is %dms\n",time3);
	printf("the time of RadixCountSort is %dms\n",time4);
}
