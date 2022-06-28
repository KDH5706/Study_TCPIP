#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int num = 0;
	int sum = 0;

	num = atoi(argv[1]);

	for(int i = 1 ; i <= (num / 2) ; i++)
	{
		sum += num + 1;
	}
	sum += (num%2)*(num/2 + 1);

	printf("%d\n", sum);

	return 0;
}

/*
int main(int argc, char* argv[])
{
	int num = 0;
	int sum = 0;

	num = atoi(argv[1]);

	for(int i = 1; i <= num ; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}
*/
