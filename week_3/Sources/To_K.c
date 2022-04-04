#include<stdio.h>

/**
 *  @name        : int To_K(int *a, int begin, int end, int k)
 *  @description : 利用快排法排序 
 *  @param       : 数组指针a
 */
int To_K(int *a, int begin, int end, int k) {
    if (begin == end) 
		return a[begin];
    int i = a[begin]; // 选中位数做枢纽
    int index = Partition(a, begin, end); // 把它排到它所在位置

    if (index + 1 == k) return i;
    else {
        if (index + 1 < k) 
			return To_K(a, index + 1, end, k); // 说明第K大,在枢纽右边
        else 
			return To_K(a, begin, index - 1, k);// 说明第K大,在枢纽左边
    }
}
