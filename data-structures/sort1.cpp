#include <iostream>
using namespace std;

void sort(int a, int b) {
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}

void bubbleSort(int array[], int size) {

	for (int j = 0; j < size-1; ++j)
		for (int i = 0; i < size-j-1; ++i) 
			if (array[i] > array[i+1])
				swap(array[i], array[i+1]);

}

int main() {

	int n = 0, i = 0;	
	int array[n];

	cout << "\nEnter size: ";
	cin >> n;

	cout << "\nEnter array elements: \n";
	for (i = 0; i < n; ++i) {
		cin >> array[i];
	}

	cout << "\nArray before sorting:";
	for (i = 0; i < n; ++i) {
		cout << array[i] << " ";
	}

	bubbleSort(array, n);

	cout << "\nArray after sorting:";
	for (i = 0; i < n; ++i) {
		cout << array[i] << " ";
	}	

	cout << "\n";

	return 0;
}
