#include<stdio.h>
#include<stdlib.h>
#define size 100

void main () {

	int burst[size] = {0};	
	int process[size] = {0};
	int wait[size] = {0};	
	//int arrival[size] = {0};	
	int turnaround[size] = {0};
	
	int x = 0;
	int i = 0;
	int j = 0;
	int sum = 0;
	float avg = 0.0, avg2 = 0.0;

	printf ("\nEnter size: ");
	scanf ("%d", &x);

	for (i = 1; i < x+1; ++i) {
		printf ("\nEnter Burst Time: ");
		scanf ("%d", &burst[i]);
		process[i] = i;
	}

	for (i = 1; i < x+1; ++i) {
		printf ("\nBurst Time for Process#%d : %d", i, burst[i]);
	}

	printf("\n");

	int temp = 0, temp2 = 0; 

	for (i = 1; i < x; ++i) {
		for (j = 1; j < x-i; ++j) {
			if (burst[j] > burst[j+1]) {
				temp = burst[j];
				temp2 = process[j];
	
				burst[j] = burst[j+1];
				process[j] = burst[j+1];
	
				burst[j+1] = temp; 
				process[j+1] = temp2;
			}	
		}
	}
		
	for (i = 1; i < x+1; ++i) {
		
		sum = 0;
 		avg = 0.0, avg2 = 0.0;
		
		for (int j = 0; j < i; ++j) {
			sum += burst[j];	
		}

		wait[i] = sum;
		turnaround[i] = burst[i] + wait[i];
		
		avg += (float) wait[i];
		avg2 += (float) turnaround[i];
		printf("\nWait Time of P%d = %d\tTurnaround Time of P%d = %d", process[i], wait[i], process[i], turnaround[i]);
	}
	printf("\n");
	printf("\nAverage Wait Time = %f and Average Turnaround Time = %f\n", (avg/x), (avg2/x));
}
