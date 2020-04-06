#include<stdio.h>
#define MAX_SIZE 8
int sorted[MAX_SIZE]; // 정렬배열은 반드시 전역변수로 선언(필요할때마다 배열생성을 한다면 비효율적이므로)

// 병합정렬
// - 일단 반으로 나누고 나중에 합치면 어떨까? 
// 병합정렬은 퀵정렬과 다르게 피벗값이 없다, 항상 반으로 나누기 때문에
// 바로 이 특징이 logN이 되도록 만들어준다.
// 장점 : 어느상태에서나 ONlogN을 보장해준다
// 단점 : 메모리의 낭비가 있다, 레코드의 크기가 큰 경우 매우 큰 시간적 낭비 


void Merge(int data_[],int left_, int middle_, int right_);
void MergeSort(int data[], int left_, int right_);
void Show(int data_[]);

int main()
{
	int data[8] = { 21, 10, 12, 20, 25, 13, 15, 22 };

	MergeSort(data, 0, MAX_SIZE - 1);
	Show(data);
}

// i : 정렬된 왼쪽 리스트에 대한 인덱스
// j : 정렬된 오른쪽 리스트에 대한 인덱스
// k : 정렬된 리스트에 대한 인덱스
void Merge(int data_[], int left_, int middle_, int right_)
{
	int i = left_;
	int j = middle_ + 1;
	int k = left_;

	//작은 순서대로 배열에 삽입
	while (i <= middle_ && j <= right_)
	{
		if (data_[i] <= data_[j])
		{
			sorted[k] = data_[i];
			i++;
		}
		else
		{
			sorted[k] = data_[j];
			j++;
		}
		k++;
	}
	// 남은 데이터도 삽입
	if (i > middle_)
	{
		for (int t = j; t <= right_; t++)
		{
			sorted[k] = data_[t];
			k++;
		}
	}
	else
	{
		for (int t = i; t <= right_; t++)
		{
			sorted[k] = data_[t];
			k++;
		}
	}

	// 정렬된 배열을 삽입
	for (int t = left_; t <= right_; t++)
	{
		data_[t] = sorted[t];
	}
}
void MergeSort(int data[], int left_, int right_)
{
	// 크기가 1보다 큰 경우 
	if(left_ < right_)
	{
		int middle = (left_ + right_) / 2;
		MergeSort(data, left_, middle);
		MergeSort(data, middle + 1, right_);

		Merge(data, left_, middle, right_);
	}
}

void Show(int data_[])
{
	int i;
	for (i = 0; i < MAX_SIZE; i++)
	{
		printf("%d ", data_[i]);
	}
}