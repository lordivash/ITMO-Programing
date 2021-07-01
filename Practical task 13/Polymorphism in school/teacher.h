// teacher.h

#include "human.h"
#include <string>
using namespace std;

class teacher : public human {
public:
	// ����������� ������ teacher
	teacher(
		std::string last_name,
		std::string name,
		std::string second_name,
		// ���������� ������� ����� �� ������� � �������������
		unsigned int work_time
	) : human(
		last_name,
		name,
		second_name
	) {
		this->work_time = work_time;
	}
	teacher() {
		set_info();
	}

	// ��������� ���������� ������� �����
	unsigned int get_work_time()
	{
		return this->work_time;
	}

	void set_info() {
		cout << "������� ���� ������: ";
		cin >> work_time;
		cout << endl;
	}

	void get_info() {
		human::get_info();
		cout << "����� ������: " << get_work_time() << endl;
	}

private:
	// ������� ����
	unsigned int work_time;
};