#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	string poem;
	getline(cin, poem);

	//Запись данных
	ofstream out("test.txt", ios::out | ios::binary);
	if (!out) {
		cout << "Fail is impossible to open";
		return 1;
	}
	out << poem;
	return 0;
}