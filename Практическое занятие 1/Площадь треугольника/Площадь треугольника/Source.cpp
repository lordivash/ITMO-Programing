#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double P, S;
	cout << "P = ";
	cin >> P;
	S = sqrt(P / 2 * (P / 2 - P / 3)* (P / 2 - P / 3)* (P / 2 - P / 3));
	cout << "Side" << "   " << "Sqare" << endl;
	cout << P / 3 << "   " << S;
	return 0;
}