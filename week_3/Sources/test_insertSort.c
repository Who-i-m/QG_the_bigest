#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  @name        : int test_insrtSort(int num)
 *  @description :	������ͬ��ģ�������ڲ��������㷨������ʱ�� 
 *  @param       : �����С��ģnum
 *  @return      : time��������ʱ�� 
 */
int test_insertSort(int num){
	int arr[num];
	srand(1);//�������
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
	
	
