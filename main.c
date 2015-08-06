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
	char *argv[] = { "/bin/sh", "-c", "env", 0 };
	char *envp[] =
	{
			"HOME=/",
	        "PATH=/bin:/usr/bin",
	        "TZ=UTC0",
	        "USER=fvdsf",
	        "LOGNAME=fdsfds",
	        0
	};
	execve(argv[0], &argv[0], envp);
	//while(1)
	//	sleep(1);
	return 0;
}
