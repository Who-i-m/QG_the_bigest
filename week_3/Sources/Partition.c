#include<stdio.h> 

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
    }
    a[left] = temp;
    return left;
 }
