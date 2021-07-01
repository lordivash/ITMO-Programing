#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void privet(string name, int k) {
	cout << name << ", Hello another time!" << " you typed " << k;
}

void privet(string name) {
	cout << name << ", " << "Hello!" << endl;
}

int main() {
	
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	int k;
	string name;
	
	cout << "Type your name" << endl;
	cin >> name;
	
	cout << "Type your favorite number" << endl;
	cin >> k;
	
	privet(name);
	
	privet(name, k);
	
	return 0;
}