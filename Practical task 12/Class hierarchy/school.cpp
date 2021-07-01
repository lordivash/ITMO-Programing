#include"human.h"
#include"student.h"
#include<iostream>
using namespace std;

int main() {

	student alex("Ivash", "Alex", "Vita", { 1,2,3,4,5 });
	cout << alex.get_full_name() << endl;
	cout << alex.get_average_score();
	system("pause");
	return 0;
}