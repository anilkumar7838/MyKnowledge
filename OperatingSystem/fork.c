#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 

int main() { 
    pid_t pid=fork();
	if (pid == 0) 
		printf("This is Child, its pid is %d\n",getpid()); 

	else
		printf("This is Parent, its pid is %d\n",getpid());
		 
	return 0; 
} 

