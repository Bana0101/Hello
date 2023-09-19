#include "main.h"
/**
 * _printf - printf function
 * @format: the format
 * Return: integer
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		switch (*format)
		{
			case '%':
				format++;
				count += _print_sp(format, args);
				break;
			default:
				count += _putchar(*format);
				break;
		}
		format++;
	}
		va_end(args);
	return (count);
}
