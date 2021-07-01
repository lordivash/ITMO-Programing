#include<iostream>

using namespace std;

int main() {
	
	char op;
	
	cout << "Make your choise: ";
	cin >> op;
	switch (op) {
		
	case 'S':
		cout << "Radio\n";
		
	case 'V':
		cout << "AC\n";
		cout << "Radio\n";
		
	default:
		cout << "Round wheels\n";
		cout << "Powerful engine\n";
	}
	
	return 0;
}