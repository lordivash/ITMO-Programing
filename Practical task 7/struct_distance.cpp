#include <iostream>
#include <Windows.h>
using namespace std;

struct Distance {
	int feet;
	double inches;
	void ShowDist() {
		cout << feet << "\' - " << inches << "\"\n";
	}
};

Distance AddDist(Distance d1, Distance d2) {
	Distance d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	if (d.inches >= 12) {
		d.inches -= 12;
		d.feet++;
	}
	return d;
}

Distance InputDist() {
	Distance d;
	cout << "\nWrite number of feets: ";
	cin >> d.feet;
	cout << "Write number of inches: ";
	cin >> d.inches;
	return d;
}

int main() {
	Distance d1 = InputDist();
	Distance d2 = { 1,6.25 };
	Distance d3 = AddDist(d1, d2);
	d1.ShowDist();
	d2.ShowDist();
	d3.ShowDist();
	return 0;
}