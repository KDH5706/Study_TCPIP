//#include <unistd.h>
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include <pthread.h>
void* thread_summation(void *arg);
int sum = 0;

int main(int argc, char *argv[])
{
	pthread_t id_t1, id_t2;
	int range1[] = {1, 5};
	int range2[] = {6, 10};

	if(pthread_create(&id_t1, NULL, thread_summation, (void*)range1) != 0)
	{
		puts("pthread1_create() error");
		return -1;
	};

	if(pthread_create(&id_t2, NULL, thread_summation, (void*)range2) != 0)
	{
		puts("pthread2_create() error");
		return -1;
	};

	if(pthread_join(id_t1, NULL) != 0)
	{
		puts("pthread1_join() error");
		return -1;
	};

	if(pthread_join(id_t2, NULL) != 0)
	{
		puts("pthread2_join() error");
		return -1;
	};

	printf("result: %d \n", sum);
	return 0;
}

void* thread_summation(void *arg)
{
	int start = ((int*)arg)[0];
	int end = ((int*)arg)[1];

	while(start <= end)
	{
		sum += start;
		start++;
	}
	return NULL;
}
