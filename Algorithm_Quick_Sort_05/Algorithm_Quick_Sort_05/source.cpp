#include<stdio.h>
// �������� ����Լ��� �̿�� 


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
	if (left >= right) // ���Ұ� 1���� ���
	{
		return; // �̹� ������ �Ǿ������Ƿ� ����
	}

	int pivot = left; // �ǹ��� ù��° ����
	int i = left + 1;
	int j = right;
	while (i <= j) // ������ ������ �ݺ�
	{
		while (data[i] <= data[pivot])
		{
			i++;
		}

		while (data[j] >= data[pivot] && j > left)
		{
			j--;
		}

		if (i > j) // ���� �����Ͱ� �����ȴٸ�
		{
			Swap(data[j], data[pivot]);
		}
		else // �������� �ʾҴٸ� ū���� �������� ��ü 
		{
			Swap(data[i], data[j]);
		}
	}

	QuickSort(data, left, j - 1);
	QuickSort(data, j + 1, right);
}