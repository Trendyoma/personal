#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - memory allocation using malloc
 * @b: number of bytes to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	void ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
