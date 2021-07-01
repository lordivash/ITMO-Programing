#include<iostream>
using namespace std;

void show_array(const int Arr[], const int N);
bool from_min(const int a, const int b);
bool from_max(const int a, const int b);
void bubble_sort(int Arr[], const int N, bool(*compare)(int a, int b));

int main() {
	
	const int n = 10;
	int my_choose = 0;
	int A[n] = { 9,8,7,6,1,2,3,5,4,9 };
	
	cout << "1. sort by increase\n";
	cout << "2. sort by decrease\n";
	
	cin >> my_choose;
	
	cout << "start data: ";
	show_array(A, n);
	
	switch (my_choose) {
		
	case 1: bubble_sort(A, n, from_min); break;
	case 2: bubble_sort(A, n, from_max); break;
	default: cout << "\rUnknown option ";
	
	}
	
	show_array(A, n);
	
	return 0;
}

void show_array(const int Arr[], const int N) {
	
	for (int i = 0; i < N; i++) {
		cout << Arr[i] << " ";
	}
	
	cout << endl;
}

bool from_min(const int a, const int b) {
	return a > b;
}

bool from_max(const int a, const int b) {
	return a < b;
}

void bubble_sort(int Arr[], const int N, bool(*compare)(int a, int b)) {
	
	for (int i = 1; i < N; i++) {
		
		for (int j = 0; j < N - 1; j++) {
			
			if ((*compare)(Arr[j], Arr[j + 1])) {
				swap(Arr[j], Arr[j + 1]);
			}
			
		}
		
	}
	
}