#include "main.h"
/**
 * print_diagonal - main entry point
 * @n: number of lines to be printed
 * Return: 0 success
 */

void print_diagonal(int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (n <= 0)
			_putchar('\n');
		else
		{
			_putchar(' ');
		}
	}
			_putchar('\\');
		_putchar('\n');
}
