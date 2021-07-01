// teacher.h

#include "human.h"
#include <string>
using namespace std;

class teacher : public human {
public:
	// Конструктор класса teacher
	teacher(
		std::string last_name,
		std::string name,
		std::string second_name,
		// Количество учебных часов за семестр у преподавателя
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

	// Получение количества учебных часов
	unsigned int get_work_time()
	{
		return this->work_time;
	}

	void set_info() {
		cout << "Введите часы работы: ";
		cin >> work_time;
		cout << endl;
	}

	void get_info() {
		human::get_info();
		cout << "Время работы: " << get_work_time() << endl;
	}

private:
	// Учебные часы
	unsigned int work_time;
};