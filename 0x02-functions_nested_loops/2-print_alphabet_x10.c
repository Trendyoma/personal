#include "main.h"
/**
 * print_alphabet_x10 - print alpahbets in lower cases 10times
 * Return: 0 (successful)
 */
void print_alphabet_x10(void)
{
	char j;
	char h;

	for (j = 1; j <= 10; j++)
	{
		for (h = 'a'; h <= 'z'; h++)
		{
			_putchar(h);
		}
		_putchar('\n');
	}
}
