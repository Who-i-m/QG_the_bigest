#include "sort.h"
#include <stdio.h>

/**
 *  @name        : void test2()
 *  @description :	����С��ģ�������ڲ�ͬ�����㷨�������������ƽ��ʱ�� 
 *  @param       :  
 *  @notice      : ���ｫС��ģ����Ϊ100�Ĳ�� 
 */
void test2(){
	int num1;
	int time1,time2,time3,time4;
	time1 = 0;time2 = 0;time3 = 0;time4 = 0;
	printf("����������ͬ������ݼ��Ĳ�ͬ�����㷨��ƽ��ʱ�����:\n");
	printf("-------------------No.4--------------------\n");
	printf("���ݼ���Σ�100\n");
	printf("���ݼ����������100k\n"); 
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
