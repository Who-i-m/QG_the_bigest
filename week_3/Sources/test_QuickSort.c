#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  @name        : int test_QuickSort(int num)
 *  @description :	������ͬ��ģ�������ڿ��������㷨������ʱ�� 
 *  @param       : �����С��ģnum
 *  @return      : time��������ʱ�� 
 */
int test_QuickSort(int num){
	int arr[num];
	srand(1);//�������
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
