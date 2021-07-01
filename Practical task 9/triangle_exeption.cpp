#include<iostream>
#include<string>
using namespace std;

class triangle {
public:

	class exception {
	public:
		string error;
		exception(string s) {
			error = s;
		}
	};

	triangle (int a, int b, int c) {
		if (a + b > c & a + c > b & c + b > a) {
			triangle::a = a;
			triangle::b = b;
			triangle::c = c;
		}
		else {
			throw exception("some side is bigger then sum of two others");
		}

	}

	void show_sides() {
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
		cout << "c = " << c << endl;
	}

	void square() {
		double p = (a + b + c) / 2;
		cout << "S = " << sqrt(p*(p - a)*(p - b)*(p - c));
	}

private:
	int a, b, c;
};

int main() {
	try {
		triangle first(3, 4, 7);
		first.show_sides();
		first.square();
	}
	catch (triangle::exception ex) {
		cout << ex.error;
	}
	return 0;
}