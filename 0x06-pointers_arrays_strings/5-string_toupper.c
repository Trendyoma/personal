#include "main.h"
/**
 * string_toupper - main entry point
 * @n: number of elements
 * Return: n success
 */

char *string_toupper(char *n)
{
	int upcase;

	upcase = 0;
	while (n[upcase] != '\0')
	{
		if (n[upcase] >= 'a' && n[upcase] <= 'z')
			n[upcase] = n[upcase] - 32;
		upcase++;
	}
	return (n);
}
