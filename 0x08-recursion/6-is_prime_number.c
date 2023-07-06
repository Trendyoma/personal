#include "main.h"

int main_prime(int n, int g);

/**
 * is_prime_number - if an integer is a prime number or not
 * @n: number to check
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (main_prime(n, n - 1));
}

/**
 * main_prime - calculates if a number is prime usng recursion
 * @n: number to check
 * @g: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int main_prime(int n, int g)
{
	if (g == 1)
		return (1);
	if (n % g == 0 && g > 0)
		return (0);
	return (main_prime(n, g - 1));
}

