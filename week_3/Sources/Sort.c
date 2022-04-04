
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

/**
 *  @name        : void ColorSort(int *a, int size)
 *  @description : ��ɫ����
 *  @param       : ����ָ��a��ֻ��0��1��2Ԫ�أ������鳤��size
 */
void ColorSort(int *a, int size) {
    int left = 0;
    int right = size - 1;//������������ 
    int i = 0;
    int temp;
    while (i <= right) {
        if (a[i] == 0){
        	temp = a[i];
        	a[i] = a[left];
        	a[left] = temp;
        	left++;//���������� 
		} 
        if(a[i] == 2){
        	temp = a[i];
        	a[i] = a[right];
        	a[right] = temp;
        	right--;//���������� 
		} 
        i++;//��׼���� 
    }
}

/**
 *  @name        : void CountSort(int *a, int size , int max)
 *  @description : ��������
 *  @param       : ����ָ��a�����鳤��size���������ֵmax
 */
void CountSort(int *a, int size , int max){
	int min  = a[0];
	int i;
	for(i = 0;i<size;i++){
		if(a[i]<min){
			min = a[i];
		}
	} //�ҵ������е���Сֵ 
	int range = max-min;//ȷ����ֵ��Χ 
	int count[range];
//	(int*)count = (int*)malloc(range*sizeof(int));//������ʱ�������ڼ��������a������ÿ�������ֵĴ��� 
	int j,k;
	for(j = 0;j<size;j++){
		count[a[i]-min]++;// ͳ��a������ÿ�������ֵĴ���
	}
	j = 0;
	for(k = 0;k<range;k++){
		while(count[k]--){
			a[j] = k+min;
			j++;//���������������� 
		}
	}
	free(count);//�ͷ���ʱ���� 

}

/**
 *  @name        : ����
 *  @description : ��һ�������������ҵ���K��/С����
 *  @param       : ����ָ��a�����鳤��size
 */
int Find_K(int *a, int size, int k){
	int begin = 0;
	int end = size-1;
	return To_K(a, begin, end, (size - k) + 1); // ��K��, ����Ϊ��С������, ��(size-k)+1��
}//�ݹ鷨��� 

/**
 *  @name        : void MergeArray(int *a,int begin,int mid,int end,int *temp);
 *  @description : �鲢���򣨺ϲ����飩
 *  @param       : ����ָ��a���������begin�������е�mid�������յ�end����������ָ��temp
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
	}					//���Ͽ��Կ�����midΪ�ֽ�������Ѿ�����õ����������λ��ʼ�Ƚϣ�С�����Ž�temp�����ڣ�ͬʱ�������� 
	while(i<=mid){
		temp[k++] = a[i++];
	}
	while(j<=end){
		temp[k++] = a[j++];
	}					//������������Ƚϲ��ϲ���һ����ʣ��һ������δ�Ž�temp���飬��ʱֻ��Ҫ��������temp������󼴿� 
}

/**
 *  @name        : void MergeSort(int *a,int begin,int end,int *temp);
 *  @description : �鲢����
 *  @param       : ����ָ��a���������begin�������յ�end����������ָ��temp
 */
void MergeSort(int *a,int begin,int end,int *temp){
	int mid;
	mid = (begin+end)/2;
	if(begin<end){
		MergeSort(a,begin,mid,temp);	//���������ݹ���� 
		MergeSort(a,mid+1,end,temp);	//���ұ�����ݹ���� 
		MergeArray(a,begin,mid,end,temp); //����С��λ��������ϲ� 
	}
}

/**
 *  @name        : void QuickSort(int *a, int begin, int end)
 *  @description : ��������(������)
 *  @param       : ����ָ��a, �������begin, �����յ�end
 */
int Partition(int *a, int begin, int end)//�������������ţ�
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
    }//ͨ�������������м�������飬���Ƚϴ�С���û�������������ֳ������֣�ʹ����벿�ֵ���С����Ŧ���Ұ벿�ֵ���������Ŧ 
    a[left] = temp;//����Ŧ�û��������������м�  
    return left;
 }

/**
 *  @name        : void QuickSort(int *a, int begin, int end);
 *  @description : �������򣨵ݹ�棩
 *  @param       : ����ָ��a���������begin�������յ�end
 */
void QuickSort_Recursion(int *a, int begin, int end){
	if(begin<end){
		int i = Partition(a, begin, end); // ����Ŧ�ź�
		QuickSort_Recursion(a,begin,i-1);
		QuickSort_Recursion(a,i+1,end);
	}
}

/**
 *  @name        : void RadixCountSort(int *a,int size)
 *  @description : ������������
 *  @param       : ����ָ��a�����鳤��size
 */
void RadixCountSort(int *a,int size){
	if(size<2){
		return;
	}
	int exp = 1;//ָ��λ 
	int arr[size];//��ʱ�����������ڳн����������� 
	memset(arr,0,sizeof(arr));//��ʼ������ 
	int max = a[0];
	int i;
	for(i = 1;i<size;++i){
		if(a[i]>max){
			max = a[i];
		}
	}//�ҵ����������ֵ���Ӷ�ȷ������ָ����  
	while(max>=exp){
		int j,k,b;
		int count[10];//��ʱ�����������ڴ����Ҫ���������ĳһλ�϶�Ӧ1-9 
		memset(count,0,sizeof(count));//��ʼ������ 
		for(j = 0;j<size;j++){
			int num = (a[j]/exp)%10;
			count[num]++;
		}
		for(k = 1;k<10;k++){
			count[k]+=count[k-1];//���������ڼ���������ǰ���Ŵ�����ں������ 
		}
		for(b = size-1;b>=0;b--){
			int num_1 = (a[b]/exp)%10;
			arr[count[num_1]-1] = a[b];
			count[num_1]--;
		}
		memcpy(a,arr,size*sizeof(int));//��arr������õ������Ƶ�a������� 
		exp*=10;
	}
}

/**
 *  @name        : int To_K(int *a, int begin, int end, int k)
 *  @description : ���ÿ��ŷ����� 
 *  @param       : ����ָ��a
 */
int To_K(int *a, int begin, int end, int k) {
    if (begin == end) 
		return a[begin];
    int i = a[begin]; // ѡ��λ������Ŧ
    int index = Partition(a, begin, end); // �����ŵ�������λ��

    if (index + 1 == k) return i;
    else {
        if (index + 1 < k) 
			return To_K(a, index + 1, end, k); // ˵����K��,����Ŧ�ұ�
        else 
			return To_K(a, begin, index - 1, k);// ˵����K��,����Ŧ���
    }
}

/**
 *  @name        : void insertSort(int *a,int n);
 *  @description : ���������㷨
 *  @param       : ����ָ�� a, ���鳤�� n
 */
void insertSort(int *a,int n){
	int i;
	int temp; 
	int j; 
	for(i=1;i<n;i++){
		temp = a[i];    //�����Ҫǰ����� 
		j = i-1;		//����j = i-1���ڱȽϵ�ǰ���Ƿ����ǰһ�������Ӷ��ж��Ƿ���Ҫǰ�� 
		while(j>=0&&a[j]>temp){
			a[j+1] = a[j];
			j--;
		}		//ǰ�����������ǰ��С��ǰһ����ʱ��ͨ��whileѭ��ʹ�õ�ǰ��������ǰһ�����û�ǰ�� 
		a[j+1] = temp;
	}	 
}

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

/**
 *  @name        : int test_MergeSort(int num)
 *  @description :	������ͬ��ģ�������ڹ鲢�����㷨������ʱ�� 
 *  @param       : �����С��ģnum
 *  @return      : time��������ʱ�� 
 */
int test_MergeSort(int num){
	int arr[num];
	int temp[num];
	srand(1);//�������
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
 *  @description :	������ͬ��ģ�������ڿ��������㷨������ʱ�� 
 *  @param       : �����С��ģnum
 *  @return      : time��������ʱ�� 
 */
int test_QuickSort(int num){
	int arr[num];
	srand(1);//�������
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
 *  @description :	������ͬ��ģ�������ڻ��������㷨������ʱ�� 
 *  @param       : �����С��ģnum
 *  @return      : time��������ʱ�� 
 */
int test_RadixCountSort(int num){
	int arr[num];
	srand(1);//�������
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
 *  @description :	������ͬ��ģ�������ڲ��������㷨������ʱ�� 
 *  @param       : �����С��ģnum
 *  @return      : time��������ʱ�� 
 */
int test_insertSort(int num){
	int arr[num];
	srand(1);//�������
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
