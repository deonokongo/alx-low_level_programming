#include "main.h"
#include<stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of memory block
 * @size: size of element
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
