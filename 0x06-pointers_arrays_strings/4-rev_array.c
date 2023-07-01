#include "main.h"
#include <string.h>
/**
 * reverse_array - main point of entry
 * @a: memory allocation
 * @n: number of elements
 * Return: 0 successful
 */

void reverse_array(int *a, int n)
{
	int b, c;

	for (b = n - 1; b > n / 2; b--)
	{
		c = a[n - 1 - b];
		a[n - 1 - b] = a[b];
		a[b] = c;
	}
}

