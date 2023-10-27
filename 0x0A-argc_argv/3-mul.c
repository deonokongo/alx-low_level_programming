#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		return (1);
	}
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, n, sign;

	i = 0;
	n = 0;
	sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}

		n = n * 10 + (s[i] - '0');
		i++;
	}
	return (n * sign);
}

