#include<stdio.h>

// ������ ���ڵ��� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�
// 1 10 5 8 7 6 4 3 2 9

// ���� �ִ� ���� ���ؼ� �� ���� ���� ������ ������
// �ð����⵵ : O(N^2)
// ���������� Swap�� ȣ���� ���� �Ͼ �������ĺ��ٴ� �� �������� Ư¡�̴�.

void Swap(int &a, int &b);

int main()
{
	int i, j;
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				Swap(array[j], array[j + 1]);
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}

void Swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}