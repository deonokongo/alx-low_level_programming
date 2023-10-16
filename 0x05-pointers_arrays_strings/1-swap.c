#include "main.h"
/**
 * swap_int -  swaps the values of two integers
 * @a: to be swapped to b
 * @b: to be swapped to a
 * Return: void.
 */
void swap_int(int *a, int *b);
{
	int temp;

	*a = *b;
	*b = temp;
	temp = *a;
}
