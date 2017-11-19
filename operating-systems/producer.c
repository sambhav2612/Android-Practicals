#include<stdio.h>
#include<stdlib.h>

#define BUF_SIZE 5

int mutex = 1;
int empty = BUF_SIZE;
int full = 0;
int BUFFER[BUF_SIZE]= {0};

int wait(int x) {
	return --x;
}

int signal(int x) {
	return ++x;
}

void producer() {
	if ((mutex == 1) || (empty != 0)) {
		mutex = wait(mutex);

		int ele;
		printf("\n Enter a element to produce: ");
		scanf("%d", &ele);

		BUFFER[full] = ele;

		empty = wait(empty);
		full = signal(full);

		mutex = signal(mutex);
	}
}

void consumer() {	
	if ((mutex == 1) || (full != 0)) {
		mutex = wait(mutex);

		printf("\n %d has been consumed from %d", &BUFFER[full-1], &full-1);	

		full = wait(full);
		empty = signal(empty);
	
		mutex = signal(empty);
	}

}

void main () {
	producer();
	consumer();
}
