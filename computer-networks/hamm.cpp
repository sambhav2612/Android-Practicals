#include<iostream>
#include<cmath>
using namespace std;

int parityCalc(int array[], int parityNum, int size) {
	
	int flag = parityNum;
	int count = 0;

	for (int i = parityNum-1; i < size; ) {
		if (array[i] == 1)
			++count;
			
			--flag;
			++i;
			
			if (!flag) {
				flag = parityNum;
				i += parityNum;
			}
	}
	
	if (count%2 == 0)	//even
		return 0;
	else
		return 1;
}

int main () {
	
	int size = 0; // size pf message
	
	int msg[100], i = 0, x = 0;
	cout << endl << "Enter message (5 to stop): \n";
	cin >> x;
	
	while (x != 5) {
		msg[i] = x;
		cin >> x;
		++i;
	}
	size = i;
	
	/*for (int i = 0; i < msg.length(); ++i) {
		cin >> msg[i];
		if (msg[i] == 5)
			break;
		else
			size++;
		
	}*/
	
	cout << endl << "Message before adding parity bits: ";
	for (int i = 0; i < size; ++i) {
		cout << msg[i] << " ";
	} 
	
	int r = 0;
	while(r<size) {
		if (pow(2,r)-r < size+1)
			++r;
		else
			break;
	}
	
	cout << endl << "Number of Parity bits added: " << r;
	
	int total = size+r;		//total array size after adding parity bits
	int data[100];
	
	for (int i = 0, j = 0, k = 0 ; i < total; ++i) {
		if ((i+1) == pow(2,j)) {
			data[i] = 0;
			++j;
		}  
		else {
			data[i] = msg[k];
			++k;
		}
	}
	
	for (int i = 0, j = 0; i < total; ++i) {
		if ((i+1) == pow(2,j)) {
			data[i] = parityCalc(data, i+1, total);
			++j;
		}
	}
	
	cout << endl << "Message after adding parity bits:  ";
	for (int i = 0, j = 0; i < total; ++i) {
		cout << data[i];	
		cout << " ";
	}
	
	return 0;
}
