#include "main.h"
/**
 * _conversion - converts specifiers.
 * @format: format string.
 * @args: argument list.
 *
 * Return: no of characters printed.
 */
int _conversion(const char *format, va_list args)
{
	int counts = 0;

	switch (*format)
	{
		case 'c':
			counts += _print_chars(va_arg(ars, int));
			break;
		case 's':
			counts += _print_strings(va_arg(args, char *));
			break;
		case 'd':
		case 'i':
			count += _print_integers(va_arg(args, int));
			break;
		default:
			break;
	}
	return (count);
}
