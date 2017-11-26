#include<iostream>
using namespace std;

void selectionSort(int array[], int size) {
	int j = 0, v = 0;
	for (int i = 0; i < size; ++i) {
		v = array[i];
		j = i;
		while ((array[j-1] >= v) && (j >= 1)) {
			array[j] = array[j-1];
			--j;
		}
		//final swap
		array[j] = v;
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
