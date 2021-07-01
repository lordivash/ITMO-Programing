// student.h
#include "human.h"
#include <string>
#include <vector>

class student : public human {
public:
	// ����������� ������ Student
	student(std::string last_name, std::string name, std::string second_name,
		std::vector<int> scores) : human(last_name, name, second_name) {
		this->scores = scores;
	}
	student() {
		set_info();
	}

	// ��������� �������� ����� ��������
	float get_average_score()
	{
		// ����� ���������� ������
		unsigned int count_scores = this->scores.size();
		// ����� ���� ������ ��������
		unsigned int sum_scores = 0;
		// ������� ����
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		return average_score;
	}

	void set_info() {
		char choise;
		int j = 0, a = 0;

		cout << "������� ������, ������� ����� ����������� ����� �� �� ��������� [0,5] ��� ��������� �����:" << endl;
		cin >> a;
		while (a >= 0 & a <= 5) {
			if (j > 25) break;
			scores.push_back(a);
			cin >> a;
		}
		cout << endl;
	}

	void get_info() {
		human::get_info();
		for (int i = 0; i < scores.size(); i++) {
			cout << "score[" << i + 1 << "] = " << scores[i] << endl;
		}
	}

private:
	// ������ ��������
	std::vector<int> scores;
};
