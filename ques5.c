#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd, pid;
	char a[300];
	printf("Current process pid is: %d\n",getpid());

	pid = fork();
	printf("parent process pid is: %d, value of pid is: %d\n",getpid(), pid);

	if(pid == 0)
	{
		printf("Child process pid: %d\n",getpid());

		fd = open("child_file.txt", O_CREAT|O_RDWR, 0777);
		printf("Value of fd: %d\n",fd);

		printf("Writing data to empty aer from file\n");
		read(fd, a, sizeof(a));

		printf("\nfile content is: \n%s\n",a);
	}
	else
	{
		printf("This is parent process, pid is: %d\n",getpid());
		printf("Parent's ppid is: %d\n",getppid());

		sleep(5);
	}


	return 0;
}
