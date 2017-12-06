// algorithmtest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"stdio.h"

//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}
//交换函数
void Swap(int *a, int *b)
{
	int sign = *a;
	*a = *b;
	*b = sign;
}
//快速排序子程序
void quicksort(int *quickarr,int low,int high)
{
	if (low >= high) return;
	int temp = quickarr[low];
	int as = quickarr[4];
	int i = low;
	int j = high;
	while (low < high)
	{
		while (quickarr[++i] < temp);
		while (quickarr[--j] > temp);
		if (i > j) break;
		Swap(&quickarr[i], &quickarr[j]);
	}
	quickarr[low] = quickarr[j];
	quickarr[j] = temp;
	quicksort(quickarr, low, j - 1);
	quicksort(quickarr, j + 1, high);
}
void binarysearch()
{
	//有序数组
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int key=0;
	printf("请输入待查找的数:");
	scanf_s("%d", &key);
	//数组总数
	int Count = 9;
	int low = 0;
	int high = 8;
	int n = (low + high) / 2;
	while (arr[n] != key &&high>low)
	{
		if (arr[n] > key)
		{
			high = n-1;
			n = (low + high) / 2;
		}
		if (arr[n] < key)
		{
			low = n+1;
			n = (low + high) / 2;
		}
	}
	if (arr[n] == key)
	{
		printf("在数组中找到该数：%d", arr[n]);
	}
	else
	{
		printf("未找到");
	}
	
	getchar();
}
void quicksortmain()
{
	int quickarr[] = {4,2,5,9,1,3};
	quicksort(quickarr,0,6);
	for (int i = 0; i < 6; i++)
	{
		printf("%4d", quickarr[i]);
	}
	getchar();
}
void main()
{
	printf("1.二分查找----------\n");
	printf("2.快速排序----------\n");
	int sel;
	printf("请输入选择：");
	scanf_s("%d", &sel);
	switch (sel){
	case 1:binarysearch();
		break;
	case 2:quicksortmain();
		break;
	default:getchar();
	}
	getchar();
}

