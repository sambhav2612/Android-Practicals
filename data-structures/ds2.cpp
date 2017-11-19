# include <iostream>
using namespace std;

class node {
	
	public: 
		int info;
		node* next;
		node* prev;

		node() {
			next = NULL;
			prev = NULL;		
		}
		node(int num) {
			info = num;			
		}
};

class list {
	
	public:
		node* head;
		node* tail;
	
		void add();
		void deletee();
		void addToHead();
		void addToTail();
		void deleteFromHead();
		void deleteFromTail();
		void printAll();
};

void list::add() {
		int c = 0;
		
		cout << endl << "Enter a element to be added: ";
		
		cin >> c;

		node* newnode = new node(c);
		if (head == NULL & tail == NULL) {
			head = tail = newnode;		
		}
		else {
			node* p = new node;
			
			if (head->info >= newnode->info) {
				p = head;
				newnode->next = head;
				head->prev = newnode;
				head = newnode;
				head->prev = NULL;
			}
				
			if (tail->info < newnode->info) {
				p = tail;
				newnode->prev = tail;
				tail->next = newnode;
				tail = newnode;
				tail->next = NULL;
			}
			
			else {
				p = head;
				while (p != NULL) {
								
					if ((p->info < newnode->info) & (p->next->info >= newnode->info)) {
						newnode->prev = p;
						newnode->next = p->next;
						p->next - newnode;
						p = p->next;
						p->prev = newnode;	
					}
					p = p->next;		
	
				}			
			}
		}
}

void list::deletee() {
		int c = 0;
		
		cout << endl << "Enter a element to be deleted: ";
		
		cin >> c;

		if (head == NULL & tail == NULL) {
			cout << endl << "Invalid Action";		
		}
		else {
			node* p = new node;

			if (head->info == c) {
				p = head;
				head = p->next;
				head->prev = NULL;
				delete p;
				if (p != NULL) {
					p = NULL;
				}
				p = p->next;			
			}
				
			if (tail->info == c) {
				p = tail;
				tail = p->prev;
				head->next = NULL;
				delete p;
				if (p != NULL) {
					p = NULL;
				}
				p = p->next;			
			}
		
			else {
				p = head;
				while (p != NULL) {
				
					if (p->info == c) {
						node* q = new node;
						node* r = new node;
						q = p->prev;
						r = p->next;
						q->next = r;
						r->prev = q;
						delete p;
						if (p != NULL) {
							p = NULL;
						}	
					}
					
					p = p->next;			
		
				}			
			}
		}
}

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
		head->prev = NULL;
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
		newNode->prev;
		tail = newNode;
		tail->next = NULL;
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
		if (p != NULL) {
			p = NULL;
		}
	}
}

void list::deleteFromTail() {	
	node* p = new node;
	if (tail == NULL) {	//underflow
		cout << "UNDERFLOW";
	}
	else {
		p = head;
		/*tail = tail->next;
		delete p;
		if (p != NULL) {
			p = NULL;
		}*/
		while (p->next->next != NULL) {
			p = p->next;
		}
		tail = p;
		p = p->next;
		cout << "Element deleted is: " << p->info << endl;
		delete p;
		if (p != NULL) {
			p = NULL;
		}
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
			/*if (p->next == tail) {
				cout << p->next->info << " ";
			}*/
			//else {
				cout << p->info << " ";
				p = p->next;
			//}
		}
		/*if (p == tail) {
			cout << p->info << " ";
		}*/
	}
}

int main() {

	list obj;
	int c;
	char chr;
	bool val = true;
	while (val == true) {
		//cout << endl << "ADD:" << endl;		
		//cout << endl << "1. Add/* To Head";
		//cout << endl << "2. Add To Tail";
		//cout << endl << "3. Delete From Head";
		//cout << endl << "4. Delete From Tail";
		//cout << endl << "5. Print All";
		//cout << endl << "6. EXIT";
		//cout << endl << "Enter your choice: ";
		
		obj.add();
		obj.add();
		obj.add();
		obj.add();
		obj.add();
		obj.deletee();
		obj.deletee();
		val = false;

		/*switch(c) {
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
		}*/

	}

	return 0;

}
