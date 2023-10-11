#include "main.h"

/**
 * _islower - checks if char is lowercase
 * @c: the char to be checked
 * Return: 1 if char is lowercase, otherwise 0
 */
int _islower(int c)
{
	/* ASCII values of lowercase letters range from 97 to 122 */
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

