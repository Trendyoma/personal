#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing if a number is positive or negative using a source code
 * Return: 0 (successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

if (n > 0)
{
	printf("%d is positive\n", n);
	return (0);
}
else if (n == 0)
{
	printf("%d is zero", n);
}
else
{
	printf("%d is negative", n);
}
return (0);
	}
