#include "main.h"
/**
 * factorial - main entry point
 * @n: number that we need the factorial
 * Return: 0 sucessful
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
