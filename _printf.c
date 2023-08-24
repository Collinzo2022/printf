#include "main.h"
/**
 * _printf - function that produces formatted string.
 *@format: character string.
 *
 * Return: The number of characters printed(excluding null byte)
 */
int _printf(const char *format, ...)
{
	unsigned int count = 0;


	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			if (*format == '%')
				count += _print_percent();
			count += _conversion(format, args);

		}
		else
			count += _myputchar(*format);

		format++;
	}
	va_end(args);

	return (count);
}
