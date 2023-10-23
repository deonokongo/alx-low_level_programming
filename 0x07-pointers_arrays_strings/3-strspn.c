#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: accepted bytes
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int found;

	while (*s)
	{
		for (found = 0; accept[found]; found++)
		{
			if (*s == accept[found])
			{
				i++;
				break;
			}
			else if (accept[found + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
