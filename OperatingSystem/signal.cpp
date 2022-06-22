#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void handlesignal(int signum)
{
  printf("Signal caught  %d, coming out...\n", signum);
  exit(1);
}
int main () {
  signal(SIGINT, handlesignal);

  while(1) {
      printf("Sleeping ........\n");
      sleep(2);
  }
  return(0);
}
