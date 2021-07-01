#include<iostream>
using namespace std;
int main() {
	double x, y;
	cin >> x >> y;
	if (x * x + y * y < 9 && y> 0) {
		cout << "In the area";
	}
	else if (x * x + y * y > 9 || y < 0) {
		cout << "Out of the area";
	}
	else {
		cout << "At the side of the area";
	}
	return 0;
}