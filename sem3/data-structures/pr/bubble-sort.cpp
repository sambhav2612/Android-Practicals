#include<iostream>
using namespace std;

void bubbleSort(int array[], int size) {
	for (int i = size-1; i > 0; --i) {
		for (int j = 0; j < i; ++j) {
			if (array[j] > array[j+1]) {
				//swap
				array[j] = array[j] + array[j+1];
				array[j+1] = array[j] - array[j+1];
				array[j] = array[j] - array[j+1];
			}
		}
	}
}

int main () {
	int size = 0;
	int array[size] = {0};
	
	cin >> size;
	
	for (int i = 0; i < size; ++i) {
		cin >> array[i];
	}
	
	for (int i = 0; i < size; ++i) {
		cout << array[i] << " ";
	}
	cout << endl;
	
	bubbleSort(array, size);

	for (int i = 0; i < size; ++i) {
		cout << array[i] << " ";
	}
	
	return 0;
}
