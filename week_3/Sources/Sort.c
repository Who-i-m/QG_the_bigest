
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

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

/**
 *  @name        : void CountSort(int *a, int size , int max)
 *  @description : 计数排序
 *  @param       : 数组指针a，数组长度size，数组最大值max
 */
void CountSort(int *a, int size , int max){
	int min  = a[0];
	int i;
	for(i = 0;i<size;i++){
		if(a[i]<min){
			min = a[i];
		}
	} //找到数组中的最小值 
	int range = max-min;//确定数值范围 
	int count[range];
//	(int*)count = (int*)malloc(range*sizeof(int));//申请临时数组用于计数，存放a数组中每个数出现的次数 
	int j,k;
	for(j = 0;j<size;j++){
		count[a[i]-min]++;// 统计a数组中每个数出现的次数
	}
	j = 0;
	for(k = 0;k<range;k++){
		while(count[k]--){
			a[j] = k+min;
			j++;//调整数组数字排序 
		}
	}
	free(count);//释放临时数组 

}

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

/**
 *  @name        : void MergeSort(int *a,int begin,int end,int *temp);
 *  @description : 归并排序
 *  @param       : 数组指针a，数组起点begin，数组终点end，承载数组指针temp
 */
void MergeSort(int *a,int begin,int end,int *temp){
	int mid;
	mid = (begin+end)/2;
	if(begin<end){
		MergeSort(a,begin,mid,temp);	//对左边数组递归二分 
		MergeSort(a,mid+1,end,temp);	//对右边数组递归二分 
		MergeArray(a,begin,mid,end,temp); //对最小单位进行排序合并 
	}
}

/**
 *  @name        : void QuickSort(int *a, int begin, int end)
 *  @description : 快速排序(枢轴存放)
 *  @param       : 数组指针a, 数组起点begin, 数组终点end
 */
int Partition(int *a, int begin, int end)//快速排序（枢轴存放）
{
  int left = begin;
    int right = end;
    int temp = a[left];
    while (left < right)
    {
        while ((a[right] >= temp) && (left < right))
        {
            right--;
        }
        a[left] = a[right];
        while ((a[left] <= temp) && (left < right))
        {
            left++;
        }
        a[right] = a[left];
    }//通过左右索引向中间遍历数组，并比较大小和置换操作，将数组分成两部分，使得左半部分的数小于枢纽，右半部分的数大于枢纽 
    a[left] = temp;//将枢纽置换到左右两部分中间  
    return left;
 }

/**
 *  @name        : void QuickSort(int *a, int begin, int end);
 *  @description : 快速排序（递归版）
 *  @param       : 数组指针a，数组起点begin，数组终点end
 */
void QuickSort_Recursion(int *a, int begin, int end){
	if(begin<end){
		int i = Partition(a, begin, end); // 把枢纽排好
		QuickSort_Recursion(a,begin,i-1);
		QuickSort_Recursion(a,i+1,end);
	}
}

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

/**
 *  @name        : void test1(int num)
 *  @description :	测试相不同规模的数组在不同排序算法下所用时间 
 *  @param       :  
 */
void test1(){
	int num1,num2,num3;
	int time1,time2,time3,time4,time5,time6,time7,time8,time9,time10,time11,time12;
	printf("以下是三个不同层次数据集的不同排序时间测试:\n");
	printf("-------------------No.1--------------------\n");
	printf("数据集层次：10000\n");
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
	printf("数据集层次：50000\n");
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
	printf("数据集层次：200000\n");
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

/**
 *  @name        : void test2()
 *  @description :	测试小规模的数组在不同排序算法多次排序下所用平均时间 
 *  @param       :  
 *  @notice      : 这里将小规模定义为100的层次 
 */
void test2(){
	int num1;
	int time1,time2,time3,time4;
	time1 = 0;time2 = 0;time3 = 0;time4 = 0;
	printf("以下是在相同层次数据集的不同排序算法的平均时间测试:\n");
	printf("-------------------No.4--------------------\n");
	printf("数据集层次：100\n");
	printf("数据集排序次数：100k\n"); 
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

/**
 *  @name        : int test_MergeSort(int num)
 *  @description :	测试相同规模的数组在归并排序算法下所用时间 
 *  @param       : 数组大小规模num
 *  @return      : time排序所用时间 
 */
int test_MergeSort(int num){
	int arr[num];
	int temp[num];
	srand(1);//随机播种
	int i;
	for(i = 0;i<num;i++){
		arr[i] = rand()%num;
	}
	double  start1 = clock();
	MergeSort(arr,0,num-1,temp);
	double stop1 = clock();
	int time = stop1-start1;
	return time;
}
		
/**
 *  @name        : int test_QuickSort(int num)
 *  @description :	测试相同规模的数组在快速排序算法下所用时间 
 *  @param       : 数组大小规模num
 *  @return      : time排序所用时间 
 */
int test_QuickSort(int num){
	int arr[num];
	srand(1);//随机播种
	int i;
	for(i = 0;i<num;i++){
		arr[i] = rand()%num;
	}
	double  start1 = clock();
	QuickSort_Recursion(arr,0,num-1);
	double stop1 = clock();
	int time = stop1-start1;
	return time;
}

/**
 *  @name        : iint test_RadixCountSort(int num)
 *  @description :	测试相同规模的数组在基数排序算法下所用时间 
 *  @param       : 数组大小规模num
 *  @return      : time排序所用时间 
 */
int test_RadixCountSort(int num){
	int arr[num];
	srand(1);//随机播种
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

/**
 *  @name        : int test_insrtSort(int num)
 *  @description :	测试相同规模的数组在插入排序算法下所用时间 
 *  @param       : 数组大小规模num
 *  @return      : time排序所用时间 
 */
int test_insertSort(int num){
	int arr[num];
	srand(1);//随机播种
	int i;
	for(i = 0;i<num;i++){
		arr[i] = rand()%num;
	}
	double  start1 = clock();
	insertSort(arr,num);
	double stop1 = clock();
	int time = stop1-start1;
	return time;
}	
	
int main(){
	test1();
	test2();
}
