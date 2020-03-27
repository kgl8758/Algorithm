#include<stdio.h>

void Swap(int &x, int &y);

int main()
{
	int array[10] = { 1,10,5,8,7,6,4,3,2,9 };

	for (int i = 0; i < 10; i++)
	{
		for (int j = 1; j < 10 - i; j++)
		{
			if (array[j - 1] > array[j])
			{
				Swap(array[j - 1], array[j]);
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ",array[i]);
	}
	return 0;

}



void Swap(int &x, int &y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}