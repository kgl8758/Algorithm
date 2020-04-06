#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
class Students;

void Show(vector<Students> students_);

class Students
{
public:
	Students(string name_, int score_, int birth_)
	{
		this->name = name_;
		this->score = score_;
		this->birth = birth_;
	}
	bool operator < (Students &students_)
	{
		if(this->score == students_.score)
		{
			return this->birth < students_.birth;
		}
		return this->score > students_.score;
	}

	int GetScore()
	{
		return this->score;
	}
	string GetName()
	{
		return this->name;
	}

	int GetBirth()
	{
		return this->birth;
	}

private:
	string name;
	int score;
	int birth;
};


int main()
{
	vector<Students> students;
	students.push_back(Students("�豤��", 95, 19960125));
	students.push_back(Students("�豤��", 92, 19970125));
	students.push_back(Students("�豤��", 94, 19980125));
	students.push_back(Students("�豤��", 95, 19990125));
	students.push_back(Students("�豤��", 91, 20000125));

	//Students students[] = {
	//	Students("�豤��", 95, 19960125),
	//	Students("�豤��", 92, 19970125),
	//	Students("�豤��", 94, 19980125),
	//	Students("�豤��", 95, 19990125),
	//	Students("�豤��", 91, 20000125),
	//};

	sort(students.begin(), students.end());

	Show(students);
}

void Show(vector<Students> students_)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		cout << "�̸� : " <<students_[i].GetName() << ", ���� : " << students_[i].GetScore() 
			 << ", ������� : "<< students_[i].GetBirth() << endl;
	}
}