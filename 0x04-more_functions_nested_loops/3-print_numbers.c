#include "main.h"
/**
 * print_numbers - main point of entry
 * Return: 0 success
 */

void print_numbers(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
	{
		_putchar(h);
	}
	_putchar('\n');
}
