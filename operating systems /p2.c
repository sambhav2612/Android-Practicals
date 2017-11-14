#include <stdio.h> 
void main () {

	printf("Kernel Version: \n");
	system("cat /proc/version | cut -c 1-50");
	printf("CPU Version and Model: \n");
	system("cat /proc/cpuinfo | grep -i -m 1 'model name' | cut -c 14-52");
	printf("total memory :\n ");
        system("free -o | grep -i -m 1 'mem:' | cut -c 12-18");
        printf("Used memory :\n");
        system("free -o | grep -i -m 1 'mem:' | cut -c 23-29");

}
