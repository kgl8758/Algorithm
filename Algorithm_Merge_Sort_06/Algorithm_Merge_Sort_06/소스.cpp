#include<stdio.h>
#define MAX_SIZE 8
int sorted[MAX_SIZE]; // ���Ĺ迭�� �ݵ�� ���������� ����(�ʿ��Ҷ����� �迭������ �Ѵٸ� ��ȿ�����̹Ƿ�)

// ��������
// - �ϴ� ������ ������ ���߿� ��ġ�� ���? 
// ���������� �����İ� �ٸ��� �ǹ����� ����, �׻� ������ ������ ������
// �ٷ� �� Ư¡�� logN�� �ǵ��� ������ش�.
// ���� : ������¿����� ONlogN�� �������ش�
// ���� : �޸��� ���� �ִ�, ���ڵ��� ũ�Ⱑ ū ��� �ſ� ū �ð��� ���� 


void Merge(int data_[],int left_, int middle_, int right_);
void MergeSort(int data[], int left_, int right_);
void Show(int data_[]);

int main()
{
	int data[8] = { 21, 10, 12, 20, 25, 13, 15, 22 };

	MergeSort(data, 0, MAX_SIZE - 1);
	Show(data);
}

// i : ���ĵ� ���� ����Ʈ�� ���� �ε���
// j : ���ĵ� ������ ����Ʈ�� ���� �ε���
// k : ���ĵ� ����Ʈ�� ���� �ε���
void Merge(int data_[], int left_, int middle_, int right_)
{
	int i = left_;
	int j = middle_ + 1;
	int k = left_;

	//���� ������� �迭�� ����
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
	// ���� �����͵� ����
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

	// ���ĵ� �迭�� ����
	for (int t = left_; t <= right_; t++)
	{
		data_[t] = sorted[t];
	}
}
void MergeSort(int data[], int left_, int right_)
{
	// ũ�Ⱑ 1���� ū ��� 
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