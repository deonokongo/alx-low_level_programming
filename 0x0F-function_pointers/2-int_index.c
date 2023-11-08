#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @size: array size
 * @cmp: pointer to function
 * @array: input
 * Return: return index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
		{
			return (i);
		}
	return (-1);
}

