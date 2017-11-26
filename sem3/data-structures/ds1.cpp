# include <iostream>
using namespace std;

class node {
	
	public: 
		int info;
		node* next;

		node() {
			next = NULL;		
		}
		node(int num) {
			info = num;
		}
};

class list {
	node* head;
	node* tail;
	
	public:
		void addToHead();
		void addToTail();
		void deleteFromHead();
		void deleteFromTail();
		void printAll();
};

void list::addToHead() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	node* newNode = new node(n);

	if (head == NULL) {
		head = newNode;
		tail = newNode;
	}
	else {
		newNode->next = head;
		head = newNode;
		cout << n << " has been successfully added to head!" << endl;
	}
	
}

void list::addToTail() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	node* newNode = new node(n);

	if (tail == NULL) {
		head = newNode;
		tail = newNode;
	}
	else {
		tail->next = newNode;
		tail = newNode;
		cout << n << " has been successfully added to tail!" << endl;
	}
	
}

void list::deleteFromHead() {
	
	node* p = new node;
	if (head == NULL) {	//underflow
		cout << "UNDERFLOW";
	}
	else {
		p = head;
		cout << "Element deleted is: " << p->info << endl;
		head = head->next;
		delete p;
	}
}

void list::deleteFromTail() {
	
	node* p = new node;
	node* q = new node;
	q = tail;

	if (tail == NULL) {	//underflow
		cout << "UNDERFLOW";
	}
	else {
		p = head;
		while (p->next->next != NULL) {
			p = p->next;
		}
		tail = p;
		tail->next = NULL;
		cout << "Element deleted is: " << q->info << endl;
		delete q;
	}
}

void list::printAll() {
	if ((head == NULL) & (tail == NULL)) {
		cout << "Items can not be displayed!";
		return;
	}
	else {
		node* p = new node;
		p = head;
			
		while (p != NULL) {
			cout << p->info << " ";
			p = p->next;
		}
	}
}

int main() {

	list obj;
	int c;
	char chr;
	bool val = true;
	while (val == true) {
		cout << endl << "1. Add To Head";
		cout << endl << "2. Add To Tail";
		cout << endl << "3. Delete From Head";
		cout << endl << "4. Delete From Tail";
		cout << endl << "5. Print All";
		cout << endl << "6. EXIT";
		cout << endl << "Enter your choice: ";
		cin >> c;

		switch(c) {
			case 1 : obj.addToHead();
				 break;

			case 2 : obj.addToTail();
				 break;

			case 3 : obj.deleteFromHead();
				 break;

			case 4 : obj.deleteFromTail();
				 break;
	
			case 5 : obj.printAll();
				 break;

			case 6 : val = false;
				 break;
		
			default : cout << "Your request could not be processed!";
				  break;
		}

	}

	return 0;

}
