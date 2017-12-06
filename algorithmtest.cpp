// algorithmtest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"stdio.h"

//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}
//��������
void Swap(int *a, int *b)
{
	int sign = *a;
	*a = *b;
	*b = sign;
}
//���������ӳ���
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
	//��������
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int key=0;
	printf("����������ҵ���:");
	scanf_s("%d", &key);
	//��������
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
		printf("���������ҵ�������%d", arr[n]);
	}
	else
	{
		printf("δ�ҵ�");
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
	printf("1.���ֲ���----------\n");
	printf("2.��������----------\n");
	int sel;
	printf("������ѡ��");
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

