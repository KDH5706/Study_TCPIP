#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#define NUM_THREAD 100

void* thread_inc(void *arg);
void* thread_des(void *arg);
long long num = 0;
pthread_mutex_t mutex;

int main(int argc, char *argv[])
{
	pthread_t thread_id[NUM_THREAD];
	int i;

	pthread_mutex_init(&mutex, NULL);

	for(i = 0; i < NUM_THREAD; i++)
	{
		if( i % 2 )
		{
			if(pthread_create(&(thread_id[i]), NULL, thread_inc, NULL) != 0)
			{
				puts("pthread_create() error");
				return -1;
			};
		}
		else
		{
			if(pthread_create(&(thread_id[i]), NULL, thread_des, NULL) != 0)
			{
				puts("pthread_create() error");
				return -1;
			};
		}
	}

	for(i = 0; i < NUM_THREAD; i++)
	{
		if(pthread_join(thread_id[i], NULL) != 0)
		{
			puts("pthread_join() error");
			return -1;
		};
	}

	printf("result: %lld \n", num);
	pthread_mutex_destroy(&mutex);
	return 0;
}

void * thread_inc(void * arg)
{
	int i;
	pthread_mutex_lock(&mutex);
	for(i = 0; i < 5000000; i++)
		num += 1;
	pthread_mutex_unlock(&mutex);
	return NULL;
}

void * thread_des(void * arg)
{
	int i;
	for(i = 0; i < 5000000; i++)
	{
		pthread_mutex_lock(&mutex);
		num -= 1;
		pthread_mutex_unlock(&mutex);
	}
	return NULL;
}
