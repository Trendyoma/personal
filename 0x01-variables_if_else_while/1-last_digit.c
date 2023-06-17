#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing the last digit of random numbers
 * Return: 0 (successful)
 */


int main(void)
{
	int n;
	int lad;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (lad > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lad);
	}
	if (lad == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lad);
	}
	if (lad < 6 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lad);
	}
	return (0);
}
