// main.cpp
#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	// ������ ��������
	std::vector<int> scores;
	// ���������� ������ �������� � ������
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	student *stud = new student("������", "����", "����������", scores);

	std::cout << stud->get_full_name() << std::endl;

	std::cout << "������� ���� : " << stud->get_average_score() << std::endl;

	return 0;
}