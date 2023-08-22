#include "main.h"
/**
 * _printf - function that produces formatted string.
 *@format: character string.
 *
 * Return: The number of characters printed(excluding null byte)
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	unsigned int count = 0;
	int s_count = 0;

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_myputchar(format[i]);
			count++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				break;

			if (format[i] == 'c')
			{
				_myputchar(va_arg(args, int));
				count++;
			}
			else if (format[i] == 's')
			{
				s_count = _myputs(va_arg(args, char *));
				i++;
				count += (s_count - 1);
			}
			else if (format[i] == 'd' || 'i')
			{
				_myputchar(va_arg(args, int));
				count++;
			}
			else if (format[i] == '%')
			{
				_myputchar('%');
				count++;
			}
		}
		i++;
	}
	va_end(args);

	return (count);
}
