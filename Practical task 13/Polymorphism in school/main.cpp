#include"human.h"
#include"student.h"
#include"teacher.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	human *a[10];
	int n = 0;
	char choice;
	do
	{
		cout << "������� ������ ��� �������� ��� ������������� �����(s / t) ? ";
		cin >> choice;
		if (choice == 't')
			a[n++] = new teacher();  //����������� �� ��������� �������� ������ ��� ������
		else
			a[n++] = new student();

		cout << "����������((� / n) ? ";
		cin >> choice;
		cout << endl;
	} while (choice == 'y');

	for (int j = 0; j < n; j++) { //������� ������ � ���� ��������� ��������
		a[j]->get_info();
		cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}