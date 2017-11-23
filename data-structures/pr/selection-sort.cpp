#include<iostream>
using namespace std;

void selectionSort(int array[], int size) {
	int min = 0, temp = 0;
	for (int i = 0; i < size; ++i) {
		min = i;
		for (int j = i+1; j < size; ++j) {
			if (array[i] > array[j]) {
				min = j;
			}
		}
		//swap
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
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
	
	selectionSort(array, size);

	for (int i = 0; i < size; ++i) {
		cout << array[i] << " ";
	}
}
