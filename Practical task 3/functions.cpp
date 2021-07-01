#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void privet(string name);

int main() {
	
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	string name;
	
	cout << "Type your name" << endl;
	cin >> name;
	
	privet(name);
	
	return 0;
}

void privet(string name) {
	cout << name << ", " << "Hello!" << endl;
}
