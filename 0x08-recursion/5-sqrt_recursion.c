#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: input
 * Return: natural square root number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: input
 * @i: iterator
 * Return: actual square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (1);
	return (actual_sqrt_recursion(n, i + 1));
}


