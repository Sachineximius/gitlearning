#include <stdio.h>
#include <pthread.h>


void *thread_1()
{
	int i=0;
	while(i<5)
	{
		printf("Thread_1\n");
		i++;
	}
}

void *thread_2()
{
	int i=0;
	while(i<5)
	{
		printf("Thread_2\n");
		i++;
	}
}

int main()
{
	pthread_t tid1,tid2;
	printf("creating thread\n");
	pthread_create(&tid1, NULL, thread_1, NULL);	//create thread
	pthread_create(&tid2, NULL, thread_2, NULL);
	//sleep(5);					
//sleep will give delay, so even all threads completed in 1sec main() will still wait for sleep to complete
 
	pthread_join(tid1, NULL);			//main() will not wait for thread to complete if join is not there, end abruptly
	pthread_join(tid2, NULL);
	printf("thread destroyed\n");
}


