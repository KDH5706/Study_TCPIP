#include <stdio.h>
#include <stdlib.h>

/*
int main(int argc, char* argv[])
{
	int num = atoi(argv[1]);
	int sum = num*(num+1)/2;
	printf("%d\n", sum);
	return 0;
}
*/

int main(int argc, char* argv[])
{
	int num, i, j;
	int sum = 0;

	num = atoi(argv[1]);

	for(i = num, j = 1 ; j <= (num/2 + num%2) && (i != j) ; i--, j++)
	{
		sum += (i + j);
	}
	sum += (1-(j-i)) * i;

	printf("%d\n", sum);
	return 0;
}


/*
int main(int argc, char* argv[])
{
	int num = 0;
	int sum = 0;

	num = atoi(argv[1]);

	for(int i = 1 ; i <= (num / 2) ; i++)
	{
		sum += i + (num + 1 - i);
		//sum += num + 1;
	}
	sum += (num%2)*(num/2 + 1);

	printf("%d\n", sum);

	return 0;
}
*/

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
