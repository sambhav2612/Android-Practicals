#include<stdio.h>
#include<stdlib.h>
#define size 100

void main () {

	int burst[size] = {0};	
	int wait[size] = {0};	
	int arrival[size] = {0};	
	int turnaround[size] = {0};
	
	int x = 0;
	int i = 0;

	printf ("\nEnter size: ");
	scanf ("%d", &x);

	for (i = 1; i < x+1; ++i) {
		printf ("\nEnter Burst and Arrival Time: ");
		scanf ("%d%d", &burst[i], &arrival[i]);
		int sum = 0;
		for (int j = 0; j < i; ++j) {
			sum += burst[j];	
		}
		wait[i] = sum - arrival[i];
		turnaround[i] = burst[i] + wait[i];
	}	
	
	float avg = 0, avg2 = 0;
	for (i = 1; i < x+1; ++i) {
		avg += (float) wait[i];
		avg2 += (float) turnaround[i];
		printf("\nWait Time of P%d = %d\tTurnaround Time of P%d = %d", i, wait[i], i, turnaround[i]);
	}
	printf("\nAverage Wait Time = %f and Average Turnaround Time = %f\n", (avg/x), (avg2/x));
}
