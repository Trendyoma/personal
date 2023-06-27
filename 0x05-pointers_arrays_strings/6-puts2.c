#include "main.h"
/**
 * puts2 - main entry point
 * @str: string
 * Return: 0 successful
 */

void puts2(char *str)
{
	int p;
	int o = 0;

	while (str[o] != '\0')
	{
		o++;
	}
	for (p = 0; p < o; p += 2)
	{
		_putchar(str[p]);
	}
	_putchar('\n');
}
