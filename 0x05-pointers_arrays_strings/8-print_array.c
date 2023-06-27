#include "main.h"
#include <stdio.h>
/**
 * print_array - entry point
 * @a: memory location
 * @n: number of elemrnts of array to be printed
 * Return: o successful
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
	if (k != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
