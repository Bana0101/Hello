#include "main.h"

/**
 */

int _print_sp(const char *format, va_list args)
{
	int count = 0;

	if (*format == 'c')
		count += _putchar(va_arg(args, int));
	else if (*format == 's')
		count += _print_str(va_arg(args, char*));
	else if (*format == '%')
		count += _putchar('%');
	else if (*format == 'd')
		count += _print_num(va_arg(args, int));
	else if (*format == 'i')
		count += _print_num(va_arg(args, int));
	return (count);
}
