///home/triyasha/Documents/Assignment/Linux_Assignment_02

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	
	execl("/home/triyasha/Documents/Assignment/Linux_Assignment_02/test2", "./test2", "test", "file", 0) ;
	
	printf("\n");
	
return 0;
}
