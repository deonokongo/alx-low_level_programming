#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: input string
 * Return: 0.
 */
int _atoi(char *s)
{
	int x, w, z, len, f, digit;

	x = 0;
	w = 0;
	z = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (x < len && f == 0)
	{
		if (s[x] == '-')
			++w;
		if (s[x] >= 0 && s[x] <= 9)
		{
			digit = s[x] - '0';
			if (w % 2)
				digit = -digit;
			z = z * 10 + digit;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > 9)

				break;
			f = 0;
		}
		x++;
	}
	if (f == 0)
		return (0);
	return (0);
}


