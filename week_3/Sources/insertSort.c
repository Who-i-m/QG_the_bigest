#include<stdio.h>

/**
 *  @name        : void insertSort(int *a,int n);
 *  @description : 插入排序算法
 *  @param       : 数组指针 a, 数组长度 n
 */
void insertSort(int *a,int n){
	int i;
	int temp; 
	int j; 
	for(i=1;i<n;i++){
		temp = a[i];    //存放需要前插的数 
		j = i-1;		//定义j = i-1用于比较当前数是否大于前一个数，从而判断是否需要前插 
		while(j>=0&&a[j]>temp){
			a[j+1] = a[j];
			j--;
		}		//前插操作：当当前数小于前一个数时，通过while循环使得当前数不断与前一个数置换前插 
		a[j+1] = temp;
	}	 
}
