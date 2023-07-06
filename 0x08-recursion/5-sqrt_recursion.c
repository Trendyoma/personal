#include "main.h"

int choose_sqrt_recursion(int n, int d);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find its square root
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (choose_sqrt_recursion(n, 0));
}

/**
 * choose_sqrt_recursion - find the natural
 * square root of a number using recursion
 * @n: number to find its sqaure root
 * @d: iterator
 * Return: result
 */
int choose_sqrt_recursion(int n, int d)
{
	if (d * d > n)
		return (-1);
	if (d * d == n)
		return (d);
	return (choose_sqrt_recursion(n, d + 1));
}

