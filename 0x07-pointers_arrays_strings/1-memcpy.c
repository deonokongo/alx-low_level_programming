#include "main.h"
/**
 * memcpy - copies n bytes from memory area src to memory area dest
 * @src: input memory area
 * @dest: output memory area
 * @n: number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for ( i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
