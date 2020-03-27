#include<stdio.h>

void Swap(int &a, int &b);

int main()
{
	int array[10] = { 10,1,5,8,7,6,4,3,2,9 };

	for (int i = 0; i < 9; i++)
	{
		int j = i;
		while (array[j + 1] < array[j])
		{
			Swap(array[j + 1], array[j]);
				j--; // point
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
}

void Swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}