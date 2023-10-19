#include "main.h"
/**
 * reverse_array - reverses the contents of a array
 * @a: the array
 * @n: number of elements in an array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int start, end, temp;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
