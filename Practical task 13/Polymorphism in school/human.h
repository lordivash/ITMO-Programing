// human.h
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
#pragma once /* Защита от двойного подключения заголовочного файла */

class human {
public:
	// Конструктор класса human
	human(std::string last_name, std::string name, std::string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	human() {
		set_info();
	}

	// Получение ФИО человека
	std::string get_fullname()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

	virtual void set_info() {
		cout << "Введите фамилию: ";
		cin >> last_name;
		cout << "Введите имя: ";
		cin >> name;
		cout << "Введите отчество: ";
		cin >> second_name;
	}

	virtual void get_info() {
		cout << "Фамилия: ";
		cout << last_name << endl;
		cout << "Имя: ";
		cout << name << endl;
		cout << "Отчество: ";
		cout << second_name << endl;
	}

private:
	std::string name; // имя
	std::string last_name; // фамилия
	std::string second_name; // отчество
};