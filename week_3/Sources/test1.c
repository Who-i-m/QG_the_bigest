#include "sort.h"
#include <stdio.h>

/**
 *  @name        : void test1(int num)
 *  @description :	�����಻ͬ��ģ�������ڲ�ͬ�����㷨������ʱ�� 
 *  @param       :  
 */
void test1(){
	int num1,num2,num3;
	int time1,time2,time3,time4,time5,time6,time7,time8,time9,time10,time11,time12;
	printf("������������ͬ������ݼ��Ĳ�ͬ����ʱ�����:\n");
	printf("-------------------No.1--------------------\n");
	printf("���ݼ���Σ�10000\n");
	num1 = 10000;
	time1 = test_insertSort(num1);
	printf("Running time of insertSort is : %dms\n",time1);
	time2 = test_MergeSort(num1);
	printf("Running time of MergeSort is : %dms\n",time2);
	time3 = test_QuickSort(num1);
	printf("Running time of QuickSort_Recursion is : %dms\n",time3);
	time4 = test_RadixCountSort(num1); 
	printf("Running time of RadixCountSort is : %dms\n",time4);
	printf("-------------------No.2--------------------\n");
	printf("���ݼ���Σ�50000\n");
	num2 = 50000;
	time5 = test_insertSort(num2);
	printf("Running time of insertSort is : %dms\n",time5);
	time6 = test_MergeSort(num2);
	printf("Running time of MergeSort is : %dms\n",time6);
	time7 = test_QuickSort(num2);
	printf("Running time of QuickSort_Recursion is : %dms\n",time7);
	time8 = test_RadixCountSort(num2); 
	printf("Running time of RadixCountSort is : %dms\n",time8);
	printf("-------------------No.3--------------------\n");
	printf("���ݼ���Σ�200000\n");
	num3 = 200000;
	time9 = test_insertSort(num3);
	printf("Running time of insertSort is : %dms\n",time9);
	time10 = test_MergeSort(num3);
	printf("Running time of MergeSort is : %dms\n",time10);
	time11 = test_QuickSort(num3);
	printf("Running time of QuickSort_Recursion is : %dms\n",time11);
	time12 = test_RadixCountSort(num3); 
	printf("Running time of RadixCountSort is : %dms\n",time12);
}
