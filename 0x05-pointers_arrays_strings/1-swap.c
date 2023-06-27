#include "main.h"
/**
 * swap_int - main entry point
 * @a: first integer
 * @b: second integer
 * Return: o successful
 */

void swap_int(int *a, int *b)
{
	int changeint = *a;
		*a = *b;
		*b = changeint;
}
