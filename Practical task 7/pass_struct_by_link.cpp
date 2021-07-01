#include <iostream>
#include <Windows.h>
using namespace std;

struct Distance {
	int feet;
	double inches;
};

Distance AddDist(const Distance &d1, const Distance &d2) {
	Distance d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	if (d.inches >= 12) {
		d.inches -= 12;
		d.feet++;
	}
	return d;
}

void ShowDist(const Distance &d) {
	cout << d.feet << "\' - " << d.inches << "\"\n";
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
	ShowDist(d1);
	ShowDist(d2);
	ShowDist(d3);
	return 0;
}