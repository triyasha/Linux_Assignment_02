#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>



int main(){
	
	printf("Program\n");
	printf("execl command started\n");
	
	execl("/home/triyasha/Documents/Assignment/Linux_Assignment_02/test4", "./test4", "test", "file", "program2", 0) ;
	printf("\n");
	
	
return 0;
}
