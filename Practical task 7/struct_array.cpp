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
	int n;
	cout << "Write size n = ";
	cin >> n;
	Distance d0 = { 0,0 };
	Distance * masDist = new Distance[n];
	for (int i = 0; i < n; i++) {
		masDist[i] = InputDist();
		d0 = AddDist(d0, masDist[i]);
	}
	for (int i = 0; i < n; i++) {
		ShowDist(masDist[i]);
	}
	cout << "Sum of distances = ";
	ShowDist(d0);
	
	delete[] masDist;
	
	return 0;
}
