#include "main.h"

/**
 * _print_str - print a string
 * @str: the string
 * Return: count
 */

int _print_str(char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
