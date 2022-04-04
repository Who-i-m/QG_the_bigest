#include<stdio.h>
 
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

