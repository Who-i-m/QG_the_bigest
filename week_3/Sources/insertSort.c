#include<stdio.h>

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
