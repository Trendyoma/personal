#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - function to check for malloc
 * @b: size of the new memory
 * Return: new memory pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
