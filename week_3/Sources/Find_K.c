#include<stdio.h>

/**
 *  @name        : 自拟
 *  @description : 在一个无序序列中找到第K大/小的数
 *  @param       : 数组指针a，数组长度size
 */
int Find_K(int *a, int size, int k){
	int begin = 0;
	int end = size-1;
	return To_K(a, begin, end, (size - k) + 1); // 第K大, 解释为从小到大排, 第(size-k)+1个
}//递归法解决 
