#include<stdio.h>

// 다음의 숫자들을 오름차순으로 정렬하는 프로그램을 작성하시오
// 1 10 5 8 7 6 4 3 2 9

// 옆에 있는 값과 비교해서 더 작은 값을 앞으로 보내자
// 시간복잡도 : O(N^2)
// 버블정렬은 Swap의 호출이 많이 일어나 선택정렬보다더 더 느린것이 특징이다.

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