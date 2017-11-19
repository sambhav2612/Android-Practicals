# include <stdio.h>

void main () {

	printf("Before fork()\n");

	int a = 5;
		
	int pid = fork();

	if (pid == 0) {
		printf ("THIS IS CHILD\n");
		for (int i = 0; i < 10; ++i) {
			printf("Child prints - %d\n", (i+1));
		}
		printf("Child prints a variable declared before fork()\n");
	}
	if (pid > 0) {
		printf ("THIS IS PARENT\n");
		for (int i = 0; i < 10; ++i) {
			printf("Parent prints - %d\n", (i+1));
		}
	} 

}


