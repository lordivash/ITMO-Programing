#include<iostream>
#include<fstream>
using namespace std;

void show_array(int Arr[], int n);
bool from_max(int a, int b);
bool from_min(int a, int b);
void bubble_sort(int Arr[], int n, bool(*compare)(int a, int b));

int main() {
	int n;
	cout << "Number of elements n = ";
	cin >> n;
	int *A = new int[n];

	//Ввод массива
	for (int i = 0; i < n; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}

	//Вывод массива в текстовый файл
	ofstream out("test.txt");
	if (!out) {
		cout << "File is imposible to open";
		return 1;
	}
	for (int i = 0; i < n; i++) {
		out << A[i];
		out << " ";
	}
	out << endl;

	//Вывод массива
	show_array(A, n);

	//Организация выбора
	int my_choose = 0;
	bool(*from_f[2])(int, int) = { from_max, from_min };
	cout << "1. Sort by increase" << endl << "2. Sort by decrease\n";
	cin >> my_choose;
	bubble_sort(A, n, from_f[my_choose - 1]);

	//Вывод массива в текстовый файл
	if (!out) {
		cout << "File is imposible to open";
		return 1;
	}
	for (int i = 0; i < n; i++) {
		out << A[i];
		out << " ";
	}
	out.close();

	//Вывод массива
	show_array(A, n);

	delete[] A;

	return 0;
}

	void show_array(int Arr[], int n) {
		for (int i = 0; i < n; i++) {
			cout << Arr[i] << " ";
		}
		cout << endl;
	}

	bool from_max(int a, int b) {
		return a > b;
	}

	bool from_min(int a, int b) {
		return a < b;
	}

	void bubble_sort(int Arr[], int n, bool(*compare)(int a, int b)) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - 1; j++) {
				if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
			}
		}
	}