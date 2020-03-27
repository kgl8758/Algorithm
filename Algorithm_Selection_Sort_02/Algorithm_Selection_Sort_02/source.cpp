#include <stdio.h>


// 다음의 숫자들을 오름차순으로 정렬하는 프로그램을 작성하세요
// 1 10 5 8 7 6 4 3 2 9 

// 선택정렬 : 가장 작은것을 선택해서 제일 앞으로 보내자.
// 시간복잡도 = O(N^2) 매우 비효율적

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