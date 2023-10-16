#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: input string
 * Return: converted integer, or 0 if no valid conversion
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }

    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
        }
        else
        {
            break;
        }
        i++;
    }

    return sign * result;
}

