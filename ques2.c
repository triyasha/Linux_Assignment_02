#include<stdio.h>
#include<unistd.h>

int main()
{

	pid_t child_a, child_b;
	int n1, n2;
	printf("enter two numbers : \n");
	scanf("%d\n%d", &n1, &n2);

	child_a = fork();

	if (child_a == 0) {
		/* Child A code */
		sleep(1);
		printf("child1 : \n");
		printf("addition from child1 : %d + %d = %d\n", n1, n2, n1+n2);
		printf("child one pid = %d\n\n", getpid());

	}
	 else 
	{
		child_b = fork();

		if (child_b == 0) {
		    /* Child B code */
		    sleep(1);
		    printf("child2 : \n");
			printf("multiplication from child2 : %d * %d = %d\n", n1, n2, n1*n2);
		    printf("child two pid = %d\n\n", getpid());
			
		} 
		else {
		    /* Parent Code */
		    sleep(3);
		    printf("parent : \n");
		    printf("parent process pid = %d\n\n", getppid());
		    
		}
	}
	
	
return 0;
}
