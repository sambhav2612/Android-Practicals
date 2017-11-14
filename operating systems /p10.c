// contijous memory allocation in C
#include<stdio.h>
#define maxSize 100

void main () {

	int size = 0, i = 0, j = 0, temp = 0;
	int process[maxSize] = {0};
	int blocks[maxSize] = {0};

	int pno[maxSize] = {0};
	int bno[maxSize] = {0};

	int flag[maxSize] = {0};

	printf("Enter number of blocks you want to allocate: ");
	scanf("%d", &size);

	for (i = 0; i < size; ++i) {

		block:
		printf("\nEnter size of your block #%d: ", (i+1));
		scanf("%d", &process[i]);
		if (process[0][i] == 0) {
			printf("\n Value to block size can't be <=0 ... goto");
			goto block;	
		}

		pno[i] = i+1;	// allocating process number

		flag[i] = 0;	// block used, 0 when false, 1 when true

		process:
		printf("\nEnter size of process block #%d: ", (i+1));
		scanf("%d", &blocks[i]);
		if (blocks[0][i] == 0) {
			printf("\n Value to process size can't be <=0 ... goto");
			goto process;	
		}

		bno[i] = i+1;	// allocating block number
	}

	// implementing first-fit
	for (i = 0; i < size; ++i) {	// for processes
		for (j = 0; j < size; ++j) {	// for blocks
			if (process[i] <= blocks[j])  {
				if (flag[i] == 0) {
					// block free
					
					pno[i] = i;
					bno[i] = j;
			
					flag[i] = 1;	// flag to block to be used
				}
			}
			if ()
			else {
				continue;	// skip this loop for finding block
			}
		}
	}

	// display result of first-fit
	for(i = 0; i < size; ++i) {
		
	}

	// sorting for best-time approach
	for (i = 0; i < size-1; ++i) {
		for (j = i+1; j < size; ++j) {
			if (req[i] > req[j]) {	// small 
				small = j;
			}
		}
		temp = processno[i];
		processno[i] = processno[small];
		processno[small] = temp;
		
		temp = 0;

		for (j = i+1; j < size; ++j) {
			if (blocks[i] < blocks[j]) {	// big 
				big = j;
			}
		}
		temp = blockno[i];
		blockno[i] = blockno[big];
		blockno[big] = temp;
	}

	temp = 0;
}
