#include <iostream>
#include "human.h"
#include "teacher.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int teacher_work_time = 40;
	teacher *tch = new teacher("�������", "�������", "���������", teacher_work_time);
	std::cout << tch->get_full_name() << std::endl;
	std::cout << "���������� �����: " << tch->get_work_time() << std::endl;
	return 0;
}