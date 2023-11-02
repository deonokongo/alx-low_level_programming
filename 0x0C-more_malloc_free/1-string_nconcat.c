#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: input string
 * @s2: input string
 * @n: size of string
 * Return: pointer to newly allocated memory space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, k;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
		return (s);
}
