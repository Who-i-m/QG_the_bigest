#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  @name        : iint test_RadixCountSort(int num)
 *  @description :	������ͬ��ģ�������ڻ��������㷨������ʱ�� 
 *  @param       : �����С��ģnum
 *  @return      : time��������ʱ�� 
 */
int test_RadixCountSort(int num){
	int arr[num];
	srand(1);//�������
	int i;
	for(i = 0;i<num;i++){
		arr[i] = rand()%num;
	}
	double  start1 = clock();
	RadixCountSort(arr,num);
	double stop1 = clock();
	int time = stop1-start1;
	return time;
}
