#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
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
