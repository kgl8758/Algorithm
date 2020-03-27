#include<stdio.h>

// 삽입정렬
// 다음의 숫자들을 오름차순으로 정렬하는 프로그램을 작성하세여
// 1 10 5 8 7 6 4 3 2 9
// 시간복잡도 O(N^2)

// 필요한 순간에만 자리를 바꿔주므로 O(N^2) 가지는 알고리즘 중에선 가장 빠른 속도를 가지고있다.
// 왼쪽에 있는 인덱스는 정렬이 되어있다는 가정이 있기때문에 특정한 상황에 빠른속도를 가지고 있다.
// 거의 정렬된 상태라면 매우 빠른 속도를 보여준다. 

// 각 숫자를 적절한 위치에 삽입하면 어떨까?
void Swap(int &a, int &b);

int main()
{
	int i, j;
	int array[10] = { 10,1,5,8,7,6,4,3,2,9 };

	for (i = 0; i < 9; i++)
	{
		j = i;
		while (array[j] > array[j + 1])
		{
			Swap(array[j], array[j + 1]);
			j--; // Point
		}
	}

	for (i = 0; i < 10; i++)
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