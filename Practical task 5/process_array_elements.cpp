#include<iostream>
using namespace std;

int main() {
	const int n = 10;
	int mas[n];
	
	for (int i = 0; i < n; i++) {
		
		cout << "mas [" << i << "] = ";
		cin >> mas[i];
		
	}
	
	int s = 0, Sminus = 0, Splus = 0, oddS = 0, evenS = 0;
	
	for (int i = 0; i < n; i++) {
		
		s += mas[i];
		
		if (mas[i] > 0) {
			Splus += mas[i];
		}
		else {
			Sminus += mas[i];
		}
		
		if (i % 2 == 0 && i != 0) {
			evenS += mas[i];
		}
		else if (i != 0) {
			oddS += mas[i];
		}
		
	}
	
	cout << "Sum = " << s << endl;
	cout << "Average = " << (double)s / n << endl;
	cout << "Sum of positive = " << Splus << endl;
	cout << "Sum of negative = " << Sminus << endl;
	cout << "Sum of even elements = " << evenS << endl;
	cout << "Sum of odd elements = " << oddS;
	
	return 0;
}