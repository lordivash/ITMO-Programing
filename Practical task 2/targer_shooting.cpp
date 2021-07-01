#include<iostream>

using namespace std;

int main() {
	
	int n, s = 0;
	double x, y;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		
		cin >> x;
		cin >> y;
		
		if (x * x + y * y <= 1) {
			s += 10;
		}
		else if (x * x + y * y <= 2 * 2) {
			s += 5;
		}
		
	}
	cout << "Points = " << s << endl;
	
	// Звание зависит от среднего арифмитического очков
	if (s / n >= 7) {
		cout << "Sniper";
	}
	else if (s / n >= 3) {
		cout << "Good shooter";
	}
	else {
		cout << "Loser";
	}
	
	return 0;
}