#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *pthread_function (void* ptr);

int main()
{
	pthread_t thread1 = 0;
	pthread_create(&thread1, 0, pthread_function, 0);
	pthread_join(thread1, 0);
	return 0;
}

void *pthread_function (void* ptr)
{
	fork();
	while(1)
		sleep(1);
	return 0;
}
