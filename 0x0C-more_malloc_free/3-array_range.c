#include "main.h"
#include<stdlib.h>
/**
 * array_range -  creates an array of integers
 * @min: minimum input
 * @max: maximum input
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, l;
	int *b;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	b = malloc(sizeof(int) * l);

		if (b == NULL)
			return (NULL);
	for (i = 0; i < l; i++)
	{
		b[i] = min;
		min++;
	}
	return (b);
}
