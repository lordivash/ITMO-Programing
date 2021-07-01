#include<iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
	const float MTF;

public:
	// ����������� �� ���������
	Distance() : feet(0), inches(0.0), MTF(3.280833F) { }

	// ����������� � ����� �����������
	Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) { }

	//����������� ��� �������� MTF
	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters; // ������� � ����
		feet = int(fltfeet);          // ����� ������ �����
		inches = 12 * (fltfeet-feet); // ������� - ��� �����
	}

	void getdist()
	{
		cout << "������� ����� ����� : ";
		cin >> feet;
		cout << "������� ����� ������ : ";
		cin >> inches;
		cout << endl;
	}

	void showdist()
	{
		cout << feet << "\' - " << inches << "\"\n";
	}

	Distance operator+ (Distance) const;
	Distance operator- (Distance) const;

	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
	}
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
	Distance dist1 = 2.35F;
	dist1.showdist();

	float mtrs;
	mtrs = static_cast<float>(dist1);
	mtrs = dist1;
	cout << mtrs;
	return 0;
}