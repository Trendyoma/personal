#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - main entry point.
 * @s: pointer to string
 * Return: 0 successful
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
