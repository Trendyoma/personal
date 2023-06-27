#include "main.h"
/**
 * print_rev - main entry point
 * @s: string
 * Return: 0 succeesful
 */

void print_rev(char *s)
{ int m = 0;

	while (s[m] != '\0')
	{
		m++;
	}

	for (m -= 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
