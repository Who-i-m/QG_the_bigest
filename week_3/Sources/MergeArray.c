#include<stdio.h>

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
