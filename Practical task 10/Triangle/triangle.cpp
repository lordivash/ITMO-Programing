#include<iostream>
#include"triangle.h"

using namespace std;

triangle::triangle(dot a, dot b, dot c) {
	triangle::a = a;
	triangle::b = b;
	triangle::c = c;
}

void triangle::sides() {
	cout << "side 1 = " << a.distanceTo(b) << endl;
	cout << "side 2 = " << b.distanceTo(c) << endl;
	cout << "side 3 = " << c.distanceTo(a) << endl;
}

void triangle::perimeter() {
	cout << "P = " << a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(a) << endl;
}

void triangle::square() {
	double p = (a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(a))/2;
	cout << "S = " << sqrt(p*(p - a.distanceTo(b))*(p - b.distanceTo(c))*(p - c.distanceTo(a))) << endl;
}