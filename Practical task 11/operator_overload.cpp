#include<iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
public:
	// конструктор по умолчанию
	Distance() : feet(0), inches(0.0) { }
	// конструктор с двум€ параметрами
	Distance(int ft, float in) : feet(ft), inches(in) { }
	void getdist()
	{
		cout << "¬ведите число футов : ";
		cin >> feet;
		cout << "¬ведите число дюймов : ";
		cin >> inches;
		cout << endl;
	}
	void showdist()
	{
		cout << feet << "\' - " << inches << "\"\n";
	}
	Distance operator+ (Distance) const;
	Distance operator- (Distance) const;
};

Distance Distance::operator+ (Distance d2) const
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;
	if (i >= 12.0)
	{
		i -= 12.0;
		f++;
	}
	return Distance(f, i);
}

Distance Distance::operator- (Distance d2) const
{
	int f = feet - d2.feet;
	float i = inches - d2.inches;
	if (i < 0)
	{
		i += 12.0;
		f--;
	}
	return Distance(f, i);
}

int main() {
	setlocale(LC_ALL, "Russian");

	Distance dist1, dist2, dist3, dist4;
	dist1.getdist();
	dist2.getdist();
	dist3 = dist1 + dist2;
	dist4 = dist1 + dist2 + dist3;

	cout << "\ndist1 = ";
	dist1.showdist();
	cout << "\ndist2 = ";
	dist2.showdist();
	cout << "\ndist3 = ";
	dist3.showdist();
	cout << "\ndist4 = ";
	dist4.showdist();

	dist4 = dist4 - dist3 - dist2 - dist1;
	cout << "\ndist4 = ";
	dist4.showdist();
	return 0;
}