#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
    int flag = 0, w = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            flag = 0;
        }
        else if (flag == 0)
        {
            flag = 1;
            w++;
        }
    }

    return w;
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
    char **matrix, *tmp;
    int len = 0, words, c = 0, start = 0, end;

    while (str[len])
        len++;

    words = count_word(str);
    if (words == 0)
        return NULL;

    matrix = (char **)malloc(sizeof(char *) * (words + 1));

    if (matrix == NULL)
        return NULL;

    for (int i = 0, k = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (c > 0)
            {
                end = i;
                tmp = (char *)malloc(sizeof(char) * (c + 1));

                if (tmp == NULL)
                {
                    // Handle memory allocation failure
                    for (int j = 0; j < k; j++)
                        free(matrix[j]);
                    free(matrix);
                    return NULL;
                }

                while (start < end)
                    *tmp++ = str[start++];
                *tmp = '\0';
                matrix[k] = tmp - c;
                k++;
                c = 0;
            }
        }
        else if (c++ == 0)
        {
            start = i;
        }
    }

    matrix[words] = NULL;

    return matrix;
}

