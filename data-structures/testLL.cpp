# include <iostream>
using namespace std;

class node {

	public:		//THE CODE WON'T RUN WITHOUT THIS, UNABLE TO ACCESS
		long info;
		int count;	
		node* next;
		node* prev;
		
		node() {
			info = 0;
			next = NULL;
			prev = NULL;
		}

		node(int val) {
			info = val;
			next = NULL;
			prev = NULL;
		}
};

class list {
	node* head;
	node* tail; 

	public:
		void addToHead();
		void traverse();
		void addAfterAPosition(int pos);
		void deleteAParticularValue(long val);

};

void list::addToHead() {
	int d = 0;
	cout << endl << "Enter a value: ";
	cin >> d;

	abc:
	node *newNode = new node(d);

	if (!newNode) {		//checking if any newNode points to any node
		cout << "Node not created >> trying again >>";
		goto abc;
	}
	else {
		if ((head == NULL) & (tail == NULL)) {
			head = newNode;
			tail = newNode;
			head->prev = NULL;
			tail->next = NULL;		
		}
		else {
			head->prev = newNode;
			newNode->next = head;
			head = newNode;
			head->prev = NULL;

			if (head == newNode) {
				cout << endl << "Element " << d << " inserted at head successfully!";
			}
		}
	}
}

void list::addAfterAPosition(int pos) {
	int d = 0, k = 1;
	cout << endl << "Enter a value: ";
	cin >> d;

	abc:
	node *newNode = new node(d);	

	if (!newNode) {		//checking if any newNode points to any node
		cout << "Node not created >> trying again >>";
		goto abc;
	}
	
	else {
		if (pos == 0) {		//no node created and after start index
			cout << endl << "Creating the first node >>";
			head = newNode;
			tail = newNode;
			head->prev = NULL;
			tail->next = NULL;
	
			if (head) {	//checking if head points to the newNode
				cout << endl << d << " inserted successfully!";
			}
		}
		else {
			node *p = new node;
			node *q = new node;
			
			if (p) {
			p = head;
		
			while((k < pos) & (p->next != NULL)) {
				k++;
				p = p->next;
			}

			if (p->next == NULL & k == pos) {
				cout << endl << "Inserting this after tail!";

				tail->next = newNode;
				newNode->prev = tail;
				tail = newNode;
				tail->next = NULL;
			}

			if (p->next == NULL & k != pos) {
				cout << endl << "Invalid Position";
			}
			
			else {
				if (q) {				
				q = p->next;

				//putting the element in b/w
				p->next = newNode;
				newNode->next = q;
				q->prev = newNode;
				newNode->prev = p;

				if ((p->next == newNode) & (q->prev == newNode)) {
					cout << endl << "Element " << d << " inserted after " << pos << " nodes (from head) successfully!";
				}
				}
			}

			}
		}
	
	}
}

void list::deleteAParticularValue(long val) {
	if (head == NULL) {
		cout << endl << "No node created yet >> ";
	}

	else {
		node *p = new node;
		node *q = new node;
		p = head;

		while ((p != NULL) & (p->info != val)) {
			p = p->next;
		}

		q = p->prev;
		q->next = p->next;
		p->next->prev = q;
		delete p;
		if (p) {
			p = NULL;
		}

		if (!p) {	//p holds no address value
			cout << endl << val << " has been successfully deleted from the earliest occurence!";
		}
	}
}

void list::traverse() {
	if (head == NULL) {
		cout << endl << "No node created yet >> ";
	}

	else {
		node *p = new node;
		if(p) { 
			p = head;
			cout << endl << "New List: ";
			while (p->next != NULL) {
				cout << p->info << " ";
				p = p->next;
			}
		}
	}
}

int main() {

	list obj;
	int pos = 0, sw = 0;
	long val = 0;
	bool flag = true;

	do {
		cout << endl << "1. ADD AFTER A POSITION: ";
		cout << endl << "2. DELETE BY VALUE: ";
		cout << endl << "Enter a choice: ";
		cin >> sw;

		switch (sw) {
			
			case 1 : cout << endl << "Enter a positon after which you want to put a new node: ";
				 cin >> pos;
				 obj.addAfterAPosition(pos);
				 break;	

			case 2 : obj.traverse();

				 cout << endl << "Enter a number that you want to delete from the list: ";
				 cin >> val;
				 obj.deleteAParticularValue(val);
				 break;		

			default : cout << endl << "INVALID ENTRY";	
				  flag = false;
				  break;

		}
	} while(flag); 

	return 0;

}
