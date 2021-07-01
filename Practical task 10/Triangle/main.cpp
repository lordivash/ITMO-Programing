#include<iostream>
#include"triangle.h"

using namespace std;

int main() {
	double x, y;

	cout << "first point is (0,0)\n";
	dot a;

	cout << "\nx = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	dot b(x, y);

	cout << "\nx = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	dot c(x, y);
	cout << endl;

	triangle trig(a, b, c);

	trig.perimeter();
	trig.sides();
	trig.square();

	return 0;
}