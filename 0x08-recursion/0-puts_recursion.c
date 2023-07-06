#include "main.h"
#include <string.h>
/**
 * _puts_recursion - main entry point
 * @s: pointer to a base address
 * Return: 0 successful
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
