#include<iostream>
using namespace std;

void show_array(const int Arr[], const int N);
bool from_min(const int a, const int b);
bool from_max(const int a, const int b);
void bubble_sort(int Arr[], const int N, bool(*compare)(int a, int b));

int main() {
	
	bool(*from_f[2])(int, int) = { from_min, from_max };
	int my_choose = 0, n;
	
	cout << "Number of elements n = ";  cin >> n;  cout << endl;
	
	int *myArray = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "A[" << i << "] = ";  cin >> myArray[i];
	}

	cout << "1. sort by increase\n";
	cout << "2. sort by decrease\n";
	
	cin >> my_choose;
	
	cout << "start data: ";
	show_array(myArray, n);
	
	bubble_sort(myArray, n, from_f[my_choose - 1]);
	
	show_array(myArray, n);
	
	delete[] myArray;
	
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