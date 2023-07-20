#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function to work with
 * @array: array of int
 * @action: pointer to function
 * @size: size of array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	(*action)(array[a]);
}
