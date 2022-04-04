#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
/**
 *  @name        : void RadixCountSort(int *a,int size)
 *  @description : 基数计数排序
 *  @param       : 数组指针a，数组长度size
 */
void RadixCountSort(int *a,int size){
	if(size<2){
		return;
	}
	int exp = 1;//指数位 
	int arr[size];//临时定义数组用于承接排序后的数组 
	memset(arr,0,sizeof(arr));//初始化数组 
	int max = a[0];
	int i;
	for(i = 1;i<size;++i){
		if(a[i]>max){
			max = a[i];
		}
	}//找到数组中最大值，从而确定最大的指数级  
	while(max>=exp){
		int j,k,b;
		int count[10];//临时定义数组用于存放需要排序的数字某一位上对应1-9 
		memset(count,0,sizeof(count));//初始化数组 
		for(j = 0;j<size;j++){
			int num = (a[j]/exp)%10;
			count[num]++;
		}
		for(k = 1;k<10;k++){
			count[k]+=count[k-1];//这里类似于计数排序，提前安排大的数在后边排着 
		}
		for(b = size-1;b>=0;b--){
			int num_1 = (a[b]/exp)%10;
			arr[count[num_1]-1] = a[b];
			count[num_1]--;
		}
		memcpy(a,arr,size*sizeof(int));//将arr中排序好的数复制到a数组里边 
		exp*=10;
	}
}
