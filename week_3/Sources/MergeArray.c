#include<stdio.h>

/**
 *  @name        : void MergeArray(int *a,int begin,int mid,int end,int *temp);
 *  @description : 归并排序（合并数组）
 *  @param       : 数组指针a，数组起点begin，数组中点mid，数组终点end，承载数组指针temp
 */
void MergeArray(int *a,int begin,int mid,int end,int *temp){
	int i,j,k;
	i = begin;
	j = mid+1;
	k = begin;
	while((i<=mid)&&(j<=end)){
		if(a[i]<=a[j]){
			temp[k] = a[i];
			i++;
			k++;
		}
		if(a[i]>a[j]){
			temp[k] = a[j];
			j++;
			k++;
		}
	}					//以上可以看成以mid为分界的两个已经排序好的数组均从首位开始比较，小的数放进temp数组内，同时索引后移 
	while(i<=mid){
		temp[k++] = a[i++];
	}
	while(j<=end){
		temp[k++] = a[j++];
	}					//左右两边数组比较并合并后一定会剩下一个数还未放进temp数组，此时只需要将它放在temp数组最后即可 
}
