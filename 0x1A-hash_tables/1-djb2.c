#include "hash_tables.h"

/**
 * hash_djb2 - Hash funntion implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int n;

	hash = 5381;
	while ((n = *str++))
		hash = ((hash << 5) + hash) + n;

	return (hash);
}
