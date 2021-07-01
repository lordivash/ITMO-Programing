#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	bool IsYearVis = (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
	if (IsYearVis) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}