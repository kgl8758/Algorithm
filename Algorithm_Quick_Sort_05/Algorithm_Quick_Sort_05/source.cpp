#include<stdio.h>
// 퀵정렬을 재귀함수로 이용됨 


void Swap(int &x, int &y);
void QuickSort(int *data, int left, int right);

int main()
{
	int data[10] = { 1,10,5,8,7,6,4,3,2,9 };
	int len = 10;
	QuickSort(data, 0, len - 1);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", data[i]);
	}
	return 0;
}

void Swap(int &x, int &y)
{
	int temp = x;
	x = y; 
	y = temp;
}
void QuickSort(int *data, int left, int right)
{
	if (left >= right) // 원소가 1개인 경우
	{
		return; // 이미 정렬이 되어있으므로 리턴
	}

	int pivot = left; // 피벗은 첫번째 원소
	int i = left + 1;
	int j = right;
	while (i <= j) // 엇갈릴 때까지 반복
	{
		while (data[i] <= data[pivot])
		{
			i++;
		}

		while (data[j] >= data[pivot] && j > left)
		{
			j--;
		}

		if (i > j) // 현재 데이터가 엇갈렸다면
		{
			Swap(data[j], data[pivot]);
		}
		else // 엇갈리지 않았다면 큰값과 작은값을 교체 
		{
			Swap(data[i], data[j]);
		}
	}

	QuickSort(data, left, j - 1);
	QuickSort(data, j + 1, right);
}