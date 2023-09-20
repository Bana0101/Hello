#include "main.h"

/**
 * _binary - the binary function
 * @n: an integer
 * Return: i
 */

int _binary(int n)
{
	int binary[64], i = 0, j = 0;

	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}
	for (j = 0; j < i; j++)
		_print_num(binary[i - j - 1]);
	return (i);
}
