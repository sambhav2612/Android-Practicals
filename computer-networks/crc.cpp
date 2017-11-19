#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int gen[100], data[100], dataSend[100];
	int genSize = 0, dataSize = 0;

	int x = 0, i = 0;
	
	abc:
	cout << endl << "Enter your generator, press 5 to stop!" << endl;
	cin >> x;
	
	while (x != 5) {
		gen[i] = x;
		cin >> x;
		++i;
	}
	
	genSize = i;
	
	if ((gen[0] != 1) & (gen[genSize-2] != 0)) {
 		cout << "First and Last bits of generator should be always ONE, taking you back...";
		goto abc;
	}

	x = 0, i = 0;
	cout << endl << "Enter your message, press 5 to stop!" << endl;
	cin >> x;
	
	while (x != 5) {
		data[i] = x;
		cin >> x;
		++i;
	}

	dataSize = i;

	int cyclic = genSize - 1;
	int total = dataSize + cyclic;
	
	cout << endl << "Generator Polunomial: ";
	for (int i = 0; i < genSize; ++i)
		cout << gen[i] << " ";

	cout << endl << "Original Message: ";
	for (int i = 0; i < dataSize; ++i)
		cout << data[i] << " ";
		
	cout << endl << "Number of Redundancy Bits added: " << cyclic;

	for (int i = 0; i < total; ++i) {
		if(i < dataSize)		
			dataSend[i] = data[i];
		else
			dataSend[i] = 0;
	}

	for (int i = 0, j = 0; i < total; ++i) {
		if (i == dataSize)
			break;
		
		if(dataSend[i] == 0) {
			++i;
			continue;
		}
			
		dataSend[i+0] = dataSend[i+0] ^ gen[j+0];
		dataSend[i+1] = dataSend[i+1] ^ gen[j+1];
		dataSend[i+2] = dataSend[i+2] ^ gen[j+2];
		dataSend[i+3] = dataSend[i+3] ^ gen[j+3];
	}
	
	cout << endl << "CRC is: ";
	for (int i = 0; i < cyclic; ++i)
		cout << dataSend[i+dataSize] << " ";
	
	cout << endl << "Message to be sent (after adding Redundancy Bits): ";
	for (int i = 0; i < total; ++i)
	   	if(i < dataSize) {
			dataSend[i] = data[i];
		 	cout << data[i] << " ";
		}
		else
		 	cout << dataSend[i] << " ";

	//reciever side
	int dat[total] = {0};
	for (int i = 0, j = 0; i < total; ++i) {
		dat[i+0] = dataSe
	}

	return 0;
}
