#include "main.h"
/**
 * _print_chars - print cahracters.
 * @c: character printed.
 * Return: number of characters printed.
 */
int _print_chars(char c)
{
	int count = 0;

	write(1, &c, 1);
	count++;

	return (count);
}
/**
 * _print_strings - for format specifier s
 * @s: string.
 * Return: number of characters printed
 */
int _print_strings(char *s)
{
	int i, length = 0;
	char buffer[BUFFER_SIZE];

	if (s == NULL)
		return (write(1, "(null)", 6));
	while (s[length] != '\0')
		length++;
	for (i = 0; i < length; i++)
		buffer[i] = s[i];
	buffer[i] = '\0';
	return (write(1, buffer, length));
}

