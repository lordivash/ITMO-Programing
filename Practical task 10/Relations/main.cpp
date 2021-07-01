#include<iostream>
#include"student.h"

int main() {

	string name;
	string last_name;
	int Id;
	string cat;

	// Ввод имени с клавиатуры
	cout << "Name: ";
	getline(cin, name);
	// Ввод фамилии
	cout << "Last name: ";
	getline(cin, last_name);
	cout << "Id card number: ";
	cin >> Id;
	cout << "Status: ";
	cin >> cat;

	IdCard idc(Id, cat);

	//Выделение памяти для объекта Student
	Student *student02 = new Student(name, last_name, &idc);

	// Оценки
	int scores[5];
	// Сумма всех оценок
	int sum = 0;
	// Ввод промежуточных оценок
	for (int i = 0; i < 5; ++i) {
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// суммирование
		sum += scores[i];
	}

	//Сохранение промежуточных оценок в объект класса Student
	student02->set_scores(scores);

	// Считаем средний балл
	float average_score = sum / 5.0;
	// Сохраняем средний балл в объект класса Student
	student02->set_average_score(average_score);

	// Выводим данные по студенту
	cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << endl;
	cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
	cout << "Category: " << student02->getIdCard().getCategory() << endl;
	delete student02;
	return 0;
}