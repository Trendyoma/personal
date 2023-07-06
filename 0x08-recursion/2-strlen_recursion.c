#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - main entry point
 * @s: pointer to string
 * Return: 0 successful
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
