#include<iostream>
#include <cmath>

using namespace std;

int Myroot(double a, double b, double c, double &x1, double &x2) {
	
	double d = b * b - 4 * a * c;
	
	if (d > 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		return 1;
	}
	else if (d == 0) {
		x1 = -b / (2 * a);
		x2 = -b / (2 * a);
		return 0;
	}
	else {
		return -1;
	}
}

int main() {
	
	double a, b, c, x1 ,x2;
	cin >> a >> b >> c;
	
	cout << Myroot(a, b, c, x1, x2) << endl;
	
	if (b * b - 4 * a * c >= 0) {
		cout << "x1 = " << x1 << " x2 = " << x2;
	}
	
	return 0;
}