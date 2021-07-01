// human.h
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
#pragma once /* ������ �� �������� ����������� ������������� ����� */

class human {
public:
	// ����������� ������ human
	human(std::string last_name, std::string name, std::string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	human() {
		set_info();
	}

	// ��������� ��� ��������
	std::string get_fullname()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

	virtual void set_info() {
		cout << "������� �������: ";
		cin >> last_name;
		cout << "������� ���: ";
		cin >> name;
		cout << "������� ��������: ";
		cin >> second_name;
	}

	virtual void get_info() {
		cout << "�������: ";
		cout << last_name << endl;
		cout << "���: ";
		cout << name << endl;
		cout << "��������: ";
		cout << second_name << endl;
	}

private:
	std::string name; // ���
	std::string last_name; // �������
	std::string second_name; // ��������
};