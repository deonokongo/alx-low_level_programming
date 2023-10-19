#include "main.h"
/**
 * cap_string - capitalizes all words in a string
 * @str: string input
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int n;

	n = 0;
	while (str[n])
	{
		while (!(str[n] >= 'a' && str[n] <= 'z'))
		n++;
		if (str[n - 1] == ' ' ||
		str[n - 1] == '\t' ||
		str[n - 1] == '\n' ||
		str[n - 1] == ',' ||
		str[n - 1] == ';' ||
		str[n - 1] == '.' ||
		str[n - 1] == '!' ||
		str[n - 1] == '?' ||
		str[n - 1] == '"' ||
		str[n - 1] == '(' ||
		str[n - 1] == ')' ||
		str[n - 1] == '{' ||
		str[n - 1] == '}' ||
		n == 0)
			str[n] -= 32;
		n++;
	}
	return (str);
}

