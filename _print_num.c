#include "main.h"
/**
 * _print_int - pritn number
 *@n: input parameter
 *Return: void
*/

void _print_int(int n)
{
	int m = n;

	if (m < 0)
	{
		_putchar('-');
		m = -m;
	}
	if (m / 10)
	{
		_print_num(m / 10);
	}
	_putchar((m % 10) + '0');
}

/**
 * _print_num - print number
 * @n: input number
 * Return: lenght of n
 */

int _print_num(int n)
{
	int len = 1, x = n;

	if (n < 0)
		len++;
	while (n / 10)
	{
		n = n / 10;
		len++;
	}
	_print_int(x);
	return (len);
}
