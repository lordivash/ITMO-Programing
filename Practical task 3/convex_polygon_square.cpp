#include<iostream>
#include<cmath>
#include <vector>

using namespace std;

double side(double x, double y, double x1, double y1) {
	return sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
}

double sqare(double a, double b, double c) {
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
	
	// ƒва вектора дл€ хранени€ координат
	vector <double> x(5), y(5);
	double min, s = 0;

	for (int i = 0; i < 5; i++) {
		cin >> x[i] >> y[i];
	}
	
	// —ортировка векторов в пор€дке возрастани€ x
	for (int i = 0; i < 4; i++) {
		
		for (int j = i; j < 5; j++) {
			
			if (x[i] > x[j]) {
				swap(x[i], x[j]);
				swap(y[i], y[j]);
			}
			
		}
		
	}
	
	// ¬ случе равенства х вектр у сортируетс€ по убыванию
	for (int i = 0; i < 4; i++) {
		
		if (x[i] == x[i + 1] && y[i] > y[i + 1]) {
			swap(y[i], y[i + 1]);
		}
		
	}
	
	for (int i = 0; i < 3; i++) {
		
		s += sqare(side(x[i], y[i], x[i + 1], y[i + 1]),
			       side(x[i], y[i], x[i + 2], y[i + 2]),
			       side(x[i + 1], y[i + 1], x[i + 2], y[i + 2]));
				   
	}
	
	cout << "Sqare = " << s;
	
	return 0;
}