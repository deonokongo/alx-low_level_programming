#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string pointer
 * Return: void.
 */
void puts_half(char *str)
{
	int full_str, half_str;

	full_str = 0;

	while (str[full_str] != '\0')
		full_str++;

	half_str = full_str / 2;

	if (full_str % 2 == 1)
		half_str++;

	while (str[half_str] != '\0')
	{
		_putchar(str[half_str]);
		half_str++;
	}
	_putchar('\n');
}

