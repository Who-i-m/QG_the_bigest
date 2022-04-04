
#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED

/**
 *  @name        : void insertSort(int *a,int n);
 *  @description : 插入排序算法
 *  @param       : 数组指针 a, 数组长度 n
 */
void insertSort(int *a,int n);


/**
 *  @name        : void MergeArray(int *a,int begin,int mid,int end,int *temp);
 *  @description : 归并排序（合并数组）
 *  @param       : 数组指针a，数组起点begin，数组中点mid，数组终点end，承载数组指针temp
 */
void MergeArray(int *a,int begin,int mid,int end,int *temp);


/**
 *  @name        : void MergeSort(int *a,int begin,int end,int *temp);
 *  @description : 归并排序
 *  @param       : 数组指针a，数组起点begin，数组终点end，承载数组指针temp
 */
void MergeSort(int *a,int begin,int end,int *temp);


/**
 *  @name        : void QuickSort(int *a, int begin, int end);
 *  @description : 快速排序（递归版）
 *  @param       : 数组指针a，数组起点begin，数组终点end
 */
void QuickSort_Recursion(int *a, int begin, int end);


/**
 *  @name        : void QuickSort(int *a,int size)
 *  @description : 快速排序（非递归版）
 *  @param       : 数组指针a，数组长度size
 */
void QuickSort(int *a,int size);


/**
 *  @name        : void QuickSort(int *a, int begin, int end)
 *  @description : 快速排序（枢轴存放）
 *  @param       : 数组指针a，数组起点begin，数组终点end
 */
int Partition(int *a, int begin, int end);


/**
 *  @name        : void CountSort(int *a, int size , int max)
 *  @description : 计数排序
 *  @param       : 数组指针a，数组长度size，数组最大值max
 */
void CountSort(int *a, int size , int max);


/**
 *  @name        : void RadixCountSort(int *a,int size)
 *  @description : 基数计数排序
 *  @param       : 数组指针a，数组长度size
 */
void RadixCountSort(int *a,int size);


/**
 *  @name        : void ColorSort(int *a,int size)
 *  @description : 颜色排序
 *  @param       : 数组指针a（只含0，1，2元素），数组长度size
 */
void ColorSort(int *a,int size);


/**
 *  @name        : 自拟
 *  @description : 在一个无序序列中找到第K大/小的数
 *  @param       : 数组指针a，数组长度size
 */
int Find_K(int *a, int size, int k); 

/**
 *  @name        : int Find_K(int *a, int begin, int end, int k)
 *  @description :
 *  @param       : 数组指针a
 */
int To_K(int *a, int begin, int end, int k);

/**
 *  @name        : void test(int num)
 *  @description :	测试相同规模的数组在不同排序算法下所用时间 
 *  @param       : 数组大小规模num 
 */
void test(int num);

/**
 *  @name        : void test1()
 *  @description :	测试不同规模的数组在不同排序算法下所用时间 
 *  @param       :  
 */
void test1();

/**
 *  @name        : void test2()
 *  @description :	测试小规模的数组在不同排序算法多次排序下所用时间 
 *  @param       :  
 */
void test2();

/**
 *  @name        : int test_insrtSort(int num)
 *  @description :	测试相同规模的数组在插入排序算法下所用时间 
 *  @param       : 数组大小规模num
 *  @return      : time排序所用时间 
 */
int test_insrtSort(int num);

/**
 *  @name        : int test_MergeSort(int num)
 *  @description :	测试相同规模的数组在归并排序算法下所用时间 
 *  @param       : 数组大小规模num
 *  @return      : time排序所用时间 
 */
int test_MergeSort(int num);

/**
 *  @name        : int test_QuickSort(int num)
 *  @description :	测试相同规模的数组在快速排序算法下所用时间 
 *  @param       : 数组大小规模num
 *  @return      : time排序所用时间 
 */
int test_QuickSort(int num);

/**
 *  @name        : iint test_RadixCountSort(int num)
 *  @description :	测试相同规模的数组在基数排序算法下所用时间 
 *  @param       : 数组大小规模num
 *  @return      : time排序所用时间 
 */
int test_RadixCountSort(int num); 

 
#endif // QUEUE_H_INCLUDED
