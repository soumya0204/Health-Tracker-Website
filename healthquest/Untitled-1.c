#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void *myThreadFun(void *vargp)
{
    sleep(1);
    printf("Printing hello from Thread \n");
    return NULL;
}

int main() {
    // Write C code here
    pthread_t thread_id;
    printf("Before Thread");
    pthread_create(&thread_id, NULL, myThreadFun, NULL);
    pthread_join(thread_id, NULL);
    printf("After Thread\n");
    exit(0);
    
}