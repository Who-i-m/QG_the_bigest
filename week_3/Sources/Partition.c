#include<stdio.h> 

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
    }
    a[left] = temp;
    return left;
 }
