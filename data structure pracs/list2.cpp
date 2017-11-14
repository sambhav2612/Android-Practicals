# include <iostream>
using namespace std;

class node {

public:

	int info;
	node *next;
	node *prev;

	//contructors
	node () {
		info = 0;
	}

	node (int d) {
		info = d;
	}

};

class list {
	node *head;
	node *tail;

public:

	//driver functions
	void AddToHead();
	void DeleteFromHead();
	void AddToTail();
	void DeleteFromTail();
	void transverse();
};

void list::AddToHead() {

	int d = 0;
	cout << endl << "Enter a element to push at head: ";
	cin >> d;

	node *newNode = new node(d);	// create a new node
	if (head == NULL) {		// head points nowhere
		head = newNode;
		tail = newNode;
	}
	else {
		newNode->next = head;
		head = newNode;
		head->prev = NULL;
	}

	cout << endl << d << " has been successfully added at head";
}

void list::DeleteFromHead() {
	
	node *p = new node;
	if (head == NULL) {		// no element yet
		cout << endl << "INVALID >> UNDERFLOW";
	}

	if (head == tail) {		// only one element
		delete head;
		delete tail;
		if ((head != NULL) & (tail != NULL)) {
			head = tail - NULL;
		}	
	}

	else {
		p = head;
		head = p->next;
		head->prev = NULL;
		//newNode = head;

		cout << endl << p->info << " has been successfully deleted from head";

		delete p;
		if (p != NULL) {
			p = NULL;
		}
	}

}

void list::AddToTail() {

	int d = 0;
	cout << endl << "Enter a element to push at tail: ";
	cin >> d;

	node *newNode = new node(d);	// create a new node
	node *p = tail;
	if (tail == NULL) {		// tail points nowhere
		head = newNode;
		tail = newNode;
	}
	else {
		newNode->next = NULL;
		if (p->next == NULL) {
			p->next = newNode;
			tail = p->next;
			tail->next = NULL;
		}
	}

	cout << endl << d << " has been successfully added at tail";
}

void list::DeleteFromTail() {
	
	node *p = new node;
	if (tail == NULL) {		// no element yet
		cout << endl << "INVALID >> UNDERFLOW";
	}

	if (head == tail) {		// only one element
		delete head;
		delete tail;
		if ((head != NULL) & (tail != NULL)) {
			head = tail - NULL;
		}	
	}

	else {
		p = tail;
		tail = tail->prev;
		tail->next = NULL;
		cout << endl << p->info << " has been successfully deleted from tail";

		delete p;
		if (p != NULL) {
			p = NULL;
		}
	}

}

int main () {

	list obj;
	obj.AddToHead();
	obj.AddToHead();
	obj.AddToTail();
	obj.AddToTail();
	obj.DeleteFromHead();
	obj.DeleteFromHead();
	obj.DeleteFromTail();

	return 0;
}