#include "function_pointers.h"
#include<stdio.h>
/**
 * print_name - prints a name
 * @name: input
 * @f: pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
