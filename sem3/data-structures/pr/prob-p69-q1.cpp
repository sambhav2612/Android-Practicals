// implement stack using linked list
#include<iostream>
using namespace std;

class stack {;
	public:
	
		int data;
		stack* next;
		
		stack() {
			data = 0;
			next = NULL;
		}
		
		stack(int val) {
			data = val;
			next = NULL;
		}
};

class list {
	public:
		int size;
		stack* top;
		
		list() {
			size = 0;
			top = NULL;
		}
	
		void push();
		int pop();
		int topEle();
		int isEmpty();
		int sizeOfList();
		void FindnthNodeFromEnd();
};

int list::sizeOfList() {
	return size;
}

int list::topEle() {
	return top->data;
}

int list::isEmpty() {
	return (top == NULL); 
}

void list::push() {
	int data = 0;
	cin >> data;
	
	stack* newNode = new stack(data);
	if (isEmpty()) {
		size = 0;
		top = newNode;
		top->next = NULL;
	}
	else {
		newNode->next = top;
		top = newNode;
	}
	++size;
}

int list::pop() {
	stack* p = new stack();
	int data = 0;
	if (isEmpty()) {
		cout << "\n NO ELEMENT FOUND EXCEPTON";
		return -1;
	}
	else {
		p = top;
		// get data at top
		data = topEle();
		// move top forward
		top = top->next;
		// delete the last top
		delete p;
		if (p) {
			p = NULL;
		}
		return data;
	}
}
/*
void FindnthNodeFromEnd() {
	int size = size_t;
	
	int hashTable[size][2];
	
	for (int i = 0; i < sizeOfList(); ++i) {
		hashTable[i][0] = i + 1;
		hashTable[i][1] = 0;
	}
}
*/
int main () {

	//menu kinda
	list l1;
	l1.pop();
	l1.push();
	cout << l1.isEmpty() << endl;
	l1.push();
	l1.push();
	cout << l1.topEle() << endl;
	cout << l1.sizeOfList() << endl;

	return 0;
}
 












