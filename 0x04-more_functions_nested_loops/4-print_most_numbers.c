#include "main.h"
/**
 * print_most_numbers - main point of entry
 * Return: 0 success
 */

void print_most_numbers(void)
{
	char h;

	for (h = '0'; h <= '9'; h++)
	{
		if (!(h == '2') || (h == '4'))
		{
			_putchar(h);
		}
	}
		_putchar('\n');
}
