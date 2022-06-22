// C program to illustrate
// open system call
#include<stdio.h>
#include<errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<string.h>

extern int errno;
int main()
{	
	// if file does not have in directory
	// then file foo.txt is created.
	int fd = open("foo.txt", O_RDONLY | O_CREAT);
	
	printf("opened file fd = %d \n", fd);
	
	if (fd ==-1)
	{
		// print which type of error have in a code
		printf("Error Number % d\n", errno);
		
		// print program detail "Success or failure"
		perror("Program");				
	}
	
	//WRITING TO THE FILE to append
	int sz1; 
  
    int fd1 = open("foo.txt", O_WRONLY | O_APPEND, 0644); 
    if (fd1 < 0) 
    { 
        perror("r1"); 
        exit(1); 
    } 
      
    sz1 = write(fd1,"ABCDEFG \n ", strlen("ABCDEFG \n ")); 
      
printf("called write(% d, \"ABCDEFG\\n\", %d)."
    " It returned %d\n", fd, strlen("ABCDEFG \n "), sz1);
	
	//READING FROM FILE
	int sz; 
    char *c = (char *) calloc(100, sizeof(char));
	
	sz = read(fd, c, 100); 
    printf("called read(% d, c, 10). returned that"
        " %d bytes were read.\n", fd, sz); 
    c[sz] = '\0'; 
    printf("Those bytes are as follows:\n % s\n", c); 
	
	
	//CLOSING THE FILE
	if (close(fd) < 0) 
    { 
        perror("c1"); 
        exit(1); 
    } 
    printf("closed the fd.\n");
	return 0;
}

