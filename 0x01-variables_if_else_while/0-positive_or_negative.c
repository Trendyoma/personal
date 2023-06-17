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

	int numb;
if (numb > 0)
{
	printf("%d is positive\n", numb);
	return (0);
}
else if (numb == 0)
{
	printf("%d is zero", numb);
}
else
{
	printf("%d is negative", numb);
}
return (0);
	}
