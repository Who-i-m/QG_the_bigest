#include<stdio.h>
 
/**
 *  @name        : void ColorSort(int *a, int size)
 *  @description : 颜色排序
 *  @param       : 数组指针a（只含0，1，2元素），数组长度size
 */
void ColorSort(int *a, int size) {
    int left = 0;
    int right = size - 1;//定于左右索引 
    int i = 0;
    int temp;
    while (i <= right) {
        if (a[i] == 0){
        	temp = a[i];
        	a[i] = a[left];
        	a[left] = temp;
        	left++;//左索引右移 
		} 
        if(a[i] == 2){
        	temp = a[i];
        	a[i] = a[right];
        	a[right] = temp;
        	right--;//右索引左移 
		} 
        i++;//基准右移 
    }
}

