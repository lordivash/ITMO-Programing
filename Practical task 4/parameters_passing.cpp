#include<iostream>

using namespace std;

void fum_value(double k, double x, double y);
void fum_ptr(double k, double *x, double *y);
void fum_ref(double k, double &x, double &y);
void print(double x, double y);

int main() {
	double k = 2.5, xv = 10, yv = 10;
	print(xv, yv);

	fum_value(k, xv, yv);
	print(xv, yv);

	fum_ptr(k, &xv, &yv);
	print(xv, yv);

	fum_ref(k, xv, yv);
	print(xv, yv);
	
	return 0;
}

void fum_value(double k, double x, double y) {
	x = x + k;
	y = y + k;
}

// Передача в функцию параметра указателя
void fum_ptr(double k, double *x, double *y) {
	*x = *x + k;                                         
	*y = *y + k;
}

// Передача в функцию параметра ссылки
void fum_ref(double k, double &x, double &y) {
	x = x + k;
	y = y + k;
}

void print(double x, double y) {
	cout << "x = " << x << "; y = " << y << endl;
}
