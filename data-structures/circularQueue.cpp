// implement circular queue

#include<iostream>
using namespace std;

#define maxSize 100

class queue{
	int circularQueue[maxSize];
	int size;
	int front;
	int rear;

	public:

	queue(int size) {
		front = rear = -1;
		this->size = size;
	}

	void enqueue();
	void dequeue();

	bool isEmpty();
	bool isFull();
	int atFront();
};

bool queue::isFull() {		// return true if full, false else
	return ((rear+1) % (size) == front);	
}

bool queue::isEmpty() {		// return true if no data entered to queue, false else
	return (front == -1) ? true : false;
}

int queue::atFront() {
	if (!isEmpty())
		return circularQueue[front];
}

void queue::enqueue() {

	int data = 0;
	cin >> data;

	if (isFull()) {
		cout << "\n Trying to access unbound indicies: array is full ... return";
		return;
	}
	rear = (rear+1) % size;
	circularQueue[rear] = data;

	cout << " \n" << data << "enqueued!";
	
	// check if it was the first element
	if (front == -1) {
		front = rear;
	}
}

void queue::dequeue() {

	int data = 0;

	if (isEmpty()) {
		cout << "\n Trying to access vacant indicies: array is empty ... return";
		return;
	}

	data = atFront();

	if (front == rear) {
		front = rear = -1;
	}

	else {
		front = (front+1) % size;
	}

	cout << "\n " << data << " dequeued!";
}

int main () {

	int size = 0;
	cin >> size;

	queue q(size);	
	q.enqueue();
	q.enqueue();
	cout << q.atFront();
	q.dequeue();
	q.dequeue();
	q.dequeue();
	
}
