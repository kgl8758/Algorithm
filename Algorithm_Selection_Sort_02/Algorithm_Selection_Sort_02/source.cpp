#include <stdio.h>


// ������ ���ڵ��� ������������ �����ϴ� ���α׷��� �ۼ��ϼ���
// 1 10 5 8 7 6 4 3 2 9 

// �������� : ���� �������� �����ؼ� ���� ������ ������.
// �ð����⵵ = O(N^2) �ſ� ��ȿ����

void Swap(int &a, int &b);

int main()
{   
	int i, j, min, index;

	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (i = 0; i < 10; i++)
	{
		min = 9999;
		for (j = i; j < 10; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				index = j;
			}
		}
		Swap(array[i], array[index]);
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d", array[i]);
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