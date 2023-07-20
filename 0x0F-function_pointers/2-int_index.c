#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that returns the index of the first element
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to a function
 * Return: -1 negative integers
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
