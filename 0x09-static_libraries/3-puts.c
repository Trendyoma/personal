#include "main.h"
/**
 * _puts - main entry point
 * @s: string to stdout
 * Return: 0 successful
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
