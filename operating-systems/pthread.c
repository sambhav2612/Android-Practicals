// program to demostrate pthread

#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

void *func1(void *param) {
	int* val = (int*)param;
	int ue = *val;	

	for (int i = 0; i < 100; ++i) {
		printf("%d", ue);
	}
}

void *func2(void *param) {
	int* val = (int*)param;
	int ue = *val;	

	for (int i = 0; i < 100; ++i) {
		printf("%d\n", ue);
	}
}

void main () {

	pthread_t thread1, thread2;
	int x = 0, y = 0;

	abc:
	printf("Enter two values: ");
	scanf("%d%d", &x, &y);
	while (x <= 0 || y <= 0) {
		goto abc;
	}

	pthread_create(&thread1, NULL, func1, &x);
	pthread_create(&thread2, NULL, func2, &y);

	func1(&x);	
	func2(&y);

	printf("Successfully execute pthreads");

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);	

	exit(0);
	
}
