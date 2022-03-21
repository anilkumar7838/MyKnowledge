// g++ -pthread thread2.cpp

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *threadfunc2(void *vargp)
{
    int *myid = (int *)vargp;
    sleep(1);
    printf("For thread 2. Process id:%d and Thread id:%u\n",getpid(),*myid);
    return NULL;
}
void *threadfunc1(void *vargp)
{
 int *myid=(int *)vargp;
 sleep(2);
//  pthread_t thread;
//  pthread_create(&thread,NULL,threadfunc2,(void *)&thread);
//  pthread_join(thread,NULL);
 printf("For thread 1. Process id:%d and Thread id:%u\n",getpid(),*myid);
 return NULL;
}

int main()
{
 pthread_t thread1,thread2;
 printf("Before Thread.Process id:%d\n",getpid());
 pthread_create(&thread1, NULL, threadfunc1, (void *)&thread1);
 printf("Thread 1 is called\n");
 pthread_create(&thread2, NULL, threadfunc2, (void *)&thread2);
 printf("Thread 2 is called\n");
 pthread_join(thread1, NULL);
 pthread_join(thread2, NULL);
 printf("After Threads\n");
 exit(0);
}


