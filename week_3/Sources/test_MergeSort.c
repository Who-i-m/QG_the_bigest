#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  @name        : int test_MergeSort(int num)
 *  @description :	������ͬ��ģ�������ڹ鲢�����㷨������ʱ�� 
 *  @param       : �����С��ģnum
 *  @return      : time��������ʱ�� 
 */
int test_MergeSort(int num){
	int arr[num];
	int temp[num];
	srand(1);//�������
	int i;
	for(i = 0;i<num;i++){
		arr[i] = rand()%num;
	}
	double  start1 = clock();
	MergeSort(arr,0,num-1,temp);
	double stop1 = clock();
	int time = stop1-start1;
	return time;
}
		

