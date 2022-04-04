#include<stdio.h>

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
