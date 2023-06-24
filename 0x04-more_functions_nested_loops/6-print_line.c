#include "main.h"
/**
 * print_line - main entry point
 * @n: number of - to be printed
 * Return: o success
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m;

			for (m = 0; m <= n; m++)
			{
			_putchar('-');
			}
	_putchar('\n');
	}
}
