#include "main.h"
/**
 * _pow_recursion - main entry point
 * @x: number to find the exponetial
 * @y: exponential of x
 * Return: 0 successful
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
